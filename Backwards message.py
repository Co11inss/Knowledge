#The user will send a a string to the computer
#The computer will then print the message
#to the user but the message will be backwards

print("\tWelcome to the Backwards Game")
print("\nSend me a message and I will send it back to you backwards")

message = input("\nNow send me your message: ")

print("\nI will now send your message backwards")

print("\nHere's your message:")

messageback = message[::-1]

print(messageback)

input("\nPress enter to exit")
