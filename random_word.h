#ifndef GUARD_random_word_h
#define GUARD_random_word_h
#include<vector>
#include<string>
#include<iostream>
#include<fstream>
#include<ctime>

std::vector<std::string> read_file(std::string file_name);
std::string random_word(std::string file_name);
#endif

