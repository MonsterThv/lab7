#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#include "Header2.h"

using namespace std;

void loadFromFile(const string& filename, vector<Book>& outData) {
	ifstream in;
	string line;

	in.open(filename);

	while (getline(in, line)) {
		vector<string> l;
		string words;
		stringstream in1;
		in1 << line;

		while (getline(in1, words, '-')) {
			l.push_back(words);
		}

		outData.push_back({ l[0], l[1], stoi(l[2])});
	}
	cout << "data <========== file" << endl;
	in.close();
}