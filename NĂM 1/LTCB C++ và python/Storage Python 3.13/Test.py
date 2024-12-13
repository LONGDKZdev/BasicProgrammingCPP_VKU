import random
# Russia roulette
inputValue = int(random.randint(1, 6))
if inputValue == 1:
   print("You die")
else:
   print(inputValue)
   print("You live")