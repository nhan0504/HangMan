#include<string>
#include<iostream>
using namespace std;


bool is_symbols(string str) {
	bool symbol = false;
	static string symbols("!, @, #, $, %, ^, &, *, (, ), -, _, +, =, ;, :, ', \", <, >, ?, 1, 2, 3, 4, 5, 6, 7, 8, 9, {, }, [, ], |, \\,/");
	for (int i = 0; i != symbols.size(); i++) {
		if (str[0] == symbols[i]) {
			symbol = true;
		}
	}
	return symbol;
}
bool check_letter(char letter, string word) {
	bool exist = false;
	int size = word.size();
	for (int i = 0; i != size; i++) {
		if (letter == word[i]) {
			exist = true;
		}
	}
	return exist;
}

bool already_guess(char letter, string missed) {
	bool already_guess = false;
	for (int i = 0; i != missed.size(); i++) {
		if (letter == missed[i]) {
			already_guess = true;
		}
	}
	return already_guess;
}

string replace_letter(char letter, string word, string res) {
	int size = word.size();
	for (int i = 0; i != size; i++) {
		if (letter == word[i]) {
			res[i] = letter;
		}
	}
	return res;
}



bool success_check(string res) {
	bool success = true;
	for (int i = 0; i != res.size(); i++) {
		if (res[i] == '_') {
			success = false;
		}
	}
	return success;
}

