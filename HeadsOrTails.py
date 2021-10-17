import random

count = 0
heads = 0
tails = 0

print ("You will now flip a coin 100 times")


while count != 100:
    hort = random.randint(1, 2)
    if hort == 1:
        heads += 1
        count += 1
    else:
        tails += 1
        count += 1

print ("You flipped heads ", heads, " times and tails ", tails, " times!")
