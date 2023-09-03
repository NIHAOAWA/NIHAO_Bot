import nltk
from nltk.chat.util import Chat, reflections

# 使用中文对话语料库
pairs = [
    [
        r"我的名字是(.*)",
        ["你好 %1，你今天好吗？"]
    ],
    [
        r"你好|嗨|哈喽",
        ["你好", "嗨，你好"]
    ],
    [
        r"退出",
        ["再见", "很高兴和你聊天，再见！"]
    ],
    [
        r"(.*)",
        ["对不起，我不明白你在说什么，请再试一次。"]
    ]
]

# 创建一个聊天机器人实例
def chat():
    print("你好！我是一个简单的聊天机器人。我今天能帮你做什么？")
    chatbot = Chat(pairs, reflections)
    chatbot.converse()

# 启动聊天机器人
if __name__ == "__main__":
    chat()
