import random

print ("Here's your fortune: ")

fortune = random.randint(1, 5)

if fortune == 1:
    print ("Your love life will be great this year")
elif fortune == 2:
    print ("You are going to be rich this year")
elif fortune == 3:
    print ("You're going to get a promotion this year")
elif fortune == 4:
    print ("You are going to cry a lot this year")
elif fortune == 5:
    print ("I am so sorry to hear")
else:
    print ("Fortune cookies aren't for you")
    
