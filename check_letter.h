#ifndef GUARD_check_letter_h
#define GUARD_check_letter_h
#include<string>
bool is_symbols(std::string str);
bool check_letter(char letter, std::string word);
bool already_guess(char letter, std::string missed);
std::string replace_letter(char letter, std::string word, std::string res);
bool success_check(std::string res);
#endif

