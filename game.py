import random
winning_number = random.randint(1, 100)
guess = 1
guessed_number = int(input("Guess a number between 1 to 100 : "))
game_over = False

while not game_over:
    if guessed_number == winning_number:
        print(f"CONGRATULATION YOU WIN.......!! in {guess} times.")
        game_over = True
    else:
        if guessed_number < winning_number:
            print("SORRY... Too low")
        else:
            print("SORRY... Too high")
            
        guess += 1         
        guessed_number = int(input ("Guess again: "))