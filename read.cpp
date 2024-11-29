#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void loadFromFile(const string& filename, vector<string>& outData) {
	ifstream in;
	string line;

	in.open(filename);

	while (getline(in, line)) {
		string word;
		for (auto i : line) {
			if (i == ' ') {
				outData.push_back(word);
				word = "";
			}
			else {
				word.push_back(i);
			}
		}
		if (word != " ") {
			outData.push_back(word);
		}
	}
	in.close();
}