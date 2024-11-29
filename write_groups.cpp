#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

#include "Header3.h"

using namespace std;

void saveToFile(const std::string& filename, const Groups& groups) {
	ofstream out;
	out.open(filename);
	for (auto i : groups) {
		out << i.first << endl;
		cout << i.first << endl;
		for (auto j : i.second) {
			out << j.Name << '-' << j.Year << endl;
			cout << j.Name << '-' << j.Year << endl;
			for (auto sub : j.RecordBook) {
				out << sub.first << '-' << sub.second << endl;
				cout << sub.first << '-' << sub.second << endl;
			}
			out << "=" << endl;
			cout << "=" << endl;
		}
		out << '-' << endl;
		cout << '-' << endl;
	}
	cout << "data ==========> file" << endl;
}