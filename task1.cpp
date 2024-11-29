#include <iostream>
#include <fstream>
#include <string>

#include "Header.h"

using namespace std;

int task1()
{
    vector<string> words = {"qwer", "asdf", "fwerf", "wnjf", "woiernfoi"};
    saveToFile("task1.txt", words);
    cout << "data ==========> file" << endl;

    vector<string> res;
    loadFromFile("task1.txt", res);
    cout << "data <========== file" << endl;
    cout << "------------------------DATA------------------------" << endl;
    for (auto i : res) {
        cout << i << endl;
    }
    cout << "----------------------------------------------------" << endl;
    return 1;
}

