#include<iostream>
#include<string>
#include<stdlib.h>
#include "check_letter.h"
#include "draw_hangman.h"
#include "random_word.h"
using namespace std;
void start_game() {
	string hangman_word = random_word("words_list.txt");
	int num_letter = hangman_word.size();
	string missed;

	//Draw hangman 1st time
	draw_hangman(missed.size());
	for (int i = 0; i != num_letter; i++) {
		cout << "_ ";
	}
	cout << endl;
	cout << "Missed letters: " << endl;

	//Guess a letter
	bool success = false;
	string res(num_letter, '_');
	while (success != true && missed.size() != 6) {
		//Guess a letter
		cout << "Please enter a letter: ";
		char guess;
		string str;
		cin >> str;
		while (is_symbols(str) == true | str.size() != 1) {
			cout << "Please enter only one letter: ";
			cin >> str;
		}
		guess = str[0];
		cout << endl;
		if (check_letter(guess, hangman_word) != true) {
			if (already_guess(guess, missed) == true) {
				cout << "This letter has already been guessed. ";
			}
			else {
				missed.push_back(guess);
				draw_hangman(missed.size());
				for (int i = 0; i != res.size(); i++) {
					cout << res[i] << " ";
				}
				cout << endl;
				cout << "Missed letter: ";
				for (int i = 0; i != missed.size(); i++) {
					cout << missed[i] << " ";
				}
				cout << endl;
			}
		}
		else {
			if (already_guess(guess, res) == true) {
				cout << "This letter has already been guessed. ";
			}
			else {
				res = replace_letter(guess, hangman_word, res);
				draw_hangman(missed.size());
				for (int i = 0; i != res.size(); i++) {
					cout << res[i] << " ";
				}
				cout << endl;
				success = success_check(res);
				cout << endl;
			}
		}
	}

	//Result
	string answer;
	if (success == true) {
		cout << "You have won. Play again? Type YES or NO" << endl;
		cout << "Answer: ";
		cin >> answer;
		if (answer == "YES") {
			start_game();
		}
		else {
			exit(0);
		}
	}
	else {
		cout << "You have lost" << endl;
		cout << "The secret word is: ";
		for (int i = 0; i != num_letter; i++) {
			cout << hangman_word[i];
		}
		cout << endl;
		cout << "Play agian? Type YES or NO" << endl;
		cout << "Answer: ";
		cin >> answer;
		if (answer == "YES") {
			start_game();
		}
		else {
			exit(0);
		}
	}
}