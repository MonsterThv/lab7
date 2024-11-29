#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Header2.h"

using namespace std;

void saveToFile(const string& filename, const vector<Book>& data) {
	ofstream out;
	out.open(filename);
	for (vector<Book>::const_iterator iter = data.cbegin(); iter < data.cend(); ++iter) {
		out << iter->Author << '-' << iter->Title << '-' << iter->Year << endl;
	}
	out.close();
	cout << "data ==========> file" << endl;
}
