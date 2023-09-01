#include <iostream>
#include <string>
#include <vector>
#include <paddlehub/paddlehub.h>

int main() {
    std::cout << "NIHAO_Bot: 你好！我是 NIHAO_Bot，很高兴和你聊天。" << std::endl;
    std::cout << "NIHAO_Bot: 你可以输入 '再见' 来结束我们的对话。" << std::endl;

    // 初始化 PaddleHub 模型
    std::string module_name = "word2vec_skipgram";
    std::string module_path = "/path/to/your/module";
    paddlehub::Word2VecSkipGram module(module_name);
    module.LoadModel(module_path);

    while (true) {
        std::string user_input;
        std::cout << "你: ";
        std::cin >> user_input;

        if (user_input == "再见") {
            std::cout << "NIHAO_Bot: 再见！下次再聊！" << std::endl;
            break;
        }

        std::vector<std::string> input_words;
        input_words.push_back(user_input);
        std::vector<std::vector<float>> input_vectors = module.GetVectors(input_words);

        // 根据用户输入的词向量，进行相关的处理和生成回答的逻辑

        std::string response = "NIHAO_Bot: 这是我智能回复的结果。";
        std::cout << response << std::endl;
    }

    return 0;
}