#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;


void saveToFile(const string& filename, const vector<string>& data) {
	ofstream out;
	out.open(filename);

	for (auto i : data) {
		out << i << ' ';
	}
	out.close();
}