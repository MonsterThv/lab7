#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Book
{
	string Author;
	string Title;
	int Year;
};

void saveToFile(const string& filename, const vector<Book>& data);
void loadFromFile(const string& filename, vector<Book>& outData);