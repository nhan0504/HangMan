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

# Demonstration

![startGame](https://user-images.githubusercontent.com/76593076/181752557-8526231e-d7d9-4ebe-88db-904ba4844134.JPG)
![missedGuess](https://user-images.githubusercontent.com/76593076/181752588-ad9ec553-2ea1-4f63-9376-8fbeb8ec9c91.JPG)
![rightGuess](https://user-images.githubusercontent.com/76593076/181752601-7a7b8614-afb5-42a0-b385-c147747ae285.JPG)
![won](https://user-images.githubusercontent.com/76593076/181752614-5254132b-1352-45bf-aad4-3a9d654c5495.JPG)
