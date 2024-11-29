#include <iostream>
#include <fstream>
#include <string>

#include "Header2.h"

using namespace std;

int task2() {
	vector<Book> books = {  {"qwer", "asdf", 1234}, 
							{"kfn", "worein erf", 2348}, 
							{"qewr qer", "qwerqwe q", 2353} };
	saveToFile("file2.txt", books);
	vector<Book> res;
	loadFromFile("file2.txt", res);
	cout << "------------------------DATA------------------------" << endl;
	for (auto i : res) {
		cout << "================" << endl;
		cout << "Author - " << i.Author << endl;
		cout << "Title - " << i.Title << endl;
		cout << "Year - " << i.Year << endl;
		cout << "================" << endl;
	}
	cout << "----------------------------------------------------" << endl;
	return 1;
}