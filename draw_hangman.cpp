#include<iostream>
#include<string>
using namespace std;
void draw_hangman(string::size_type size) {
	string base(3, '=');
	string top = " +---+";
	cout << top << endl;
	if (size == 0) {
		cout << "     |" << endl;
		cout << "     |" << endl;
		cout << "     |" << endl;
		cout << "    " << base << endl;
	}
	else if (size == 1) {
		cout << " o   |" << endl;
		cout << "     |" << endl;
		cout << "     |" << endl;
		cout << "    " << base << endl;
	}
	else if (size == 2) {
		cout << " o   |" << endl;
		cout << " |   |" << endl;
		cout << "     |" << endl;
		cout << "    " << base << endl;
	}
	else if (size == 3) {
		cout << " o   |" << endl;
		cout << " |\\  |" << endl;
		cout << "     |" << endl;
		cout << "    " << base << endl;
	}
	else if (size == 4) {
		cout << " o   |" << endl;
		cout << "/|\\  |" << endl;
		cout << "     |" << endl;
		cout << "    " << base << endl;
	}
	else if (size == 5) {
		cout << " o   |" << endl;
		cout << "/|\\  |" << endl;
		cout << "/    |" << endl;
		cout << "    " << base << endl;
	}
	else if (size == 6) {
		cout << " o   |" << endl;
		cout << "/|\\  |" << endl;
		cout << "/ \\  |" << endl;
		cout << "    " << base << endl;
	}
}

