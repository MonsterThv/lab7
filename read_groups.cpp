#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>

#include "Header3.h"

using namespace std;

void loadFromFiles(const std::string& filename, Groups& outGroups) {
	ifstream in;
	in.open(filename);
	int deap = 0;
	string line;
	string group;
	stringstream instr;
	int year;
	string name;
	vector<string> words;
	map<string, Score> sub;
	string word;
	while (getline(in, line)) {
		if (line != "-" && line != "=") {
			switch (deap)
			{
			case 0:
				outGroups[line] = {};
				group = line;
				deap = 1;
				break;
			case 1:
				instr.clear();
				instr << line;
				while (getline(instr, word, '-'))
				{
					words.push_back(word);
				}
				name = *(words.end() - 2);
				year = stoi(*(words.end() - 1));
				deap = 2;
				//words.erase(words.begin(), words.end());
				break;
			case 2:
				instr.clear();
				instr << line;
				while (getline(instr, word, '-')) {
					words.push_back(word);
				}
				sub[*(words.end() - 2)] = Score(stoi(*(words.end() - 1)));
				break;
			}
		}
		if (line == "=") {
			deap = 1;
			outGroups[group].push_back({ name, year, sub });
		}
		if (line == "-") {
			deap = 0;
		}
		
	}
	cout << "data <========== file" << endl;
	in.close();
}