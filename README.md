# Overview
- A simple console hangman game using C++
- User can guess common english words and choose to replay when he or she finished a game

# How it works
- While user input is not valid, prompts the user to enter another letter
- Store letters that the user have guessed into an array
- Check user input for a letter which hasn't been guessed before 
- If the user guesses a wrong letter, draw the hangman on the console and updates the array of already guessed letters
- If the user guesses correctly, update the word to show the position of the letter
- Ask if the user wants to play again after the game ended