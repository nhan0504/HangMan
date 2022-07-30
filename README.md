# Project Name
HangMan 

A simple console hangman game where user can guess common english words and choose to replay when he or she finished a game

# How it works
- While user input is not valid, prompts the user to enter another letter
- Store letters that the user have guessed into an array
- Check user input for a letter which hasn't been guessed before 
- If the user guesses a wrong letter, draw the hangman on the console and updates the array of already guessed letters
- If the user guesses correctly, update the word to show the position of the letter
- Ask if the user wants to play again after the game ended

# Project Screen Shots
![startGame](https://user-images.githubusercontent.com/76593076/181753505-ef7ba663-b1ba-4fc3-bae2-818be44cb1d1.JPG)
![missedGuess](https://user-images.githubusercontent.com/76593076/181753536-4d516da6-bcb7-431c-9a8f-eff61cdca217.JPG)
![rightGuess](https://user-images.githubusercontent.com/76593076/181754365-d18e08d0-815e-4870-b6fd-8e16b8b2a1d2.JPG)
![won](https://user-images.githubusercontent.com/76593076/181754754-211a8ae8-e1cf-4b14-9cd3-7e64561019b3.JPG)

# Reflection
This was my first project to build something from scratch after learning C++.     

The goal of the project is to build a traditional hangman game that can generate a random word from the database and have the user guess it. The game can draw the hangman and show the user the word on the console.    

This project gave me an overview of the process of planning out a project and drawing diagrams before actually writing the code for the game. I learned how to separate tasks into functions and break down the project into different files to make my code less messy.