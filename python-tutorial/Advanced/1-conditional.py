# Write a program that asks for the user's name via input() function. 
# If the name is "Bond" make it print "Welcome on board 007." 
# If the name is "Zach" make it print "Yo!"
# Otherwise make it print "Good morning {NAME}". (Replace Name with user's name)

name = input("Enter your name: ")
if name == "Bond":
    print("Welcome on board 007")
elif name == "Zach":
    print("Yo!")
else:
    print(f"Good morning {name}")