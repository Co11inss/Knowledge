import random

WORDS = ["overused", "clam", "guam", "taffeta", "python"]

length = int(len(WORDS))



for i in range(length):
        word = WORDS[random.randint(0, length - 1)]
        print(word)
        WORDS.remove(word)
        length -= 1


