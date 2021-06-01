#include<vector>
#include<string>
#include<iostream>
#include<fstream>
using namespace std;

vector<string> read_file(string file_name) {
	vector<string> list;
	ifstream fstream(file_name);
	if (!fstream) {
		cout << "File does not exist";
		return list;
	}
	string str;
	while (getline(fstream, str)) {
		list.push_back(str);
	}
	return list;

}

string random_word(string file_name) {
	//read words from file into vector<string>
	vector<string> list = read_file(file_name);

	//Choose a random index
	srand(time(NULL));
	int index = rand() % list.size();
	//Choose a random word from list
	string hangman_word = list[index];

	return hangman_word;
}

