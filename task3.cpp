#include <iostream>
#include <fstream>
#include <string>

#include "Header3.h"

using namespace std;

int task3() {
	Student st1 = { "Sergey", 18, { {"math", Score(5)}, {"rus", Score(4)}} };
	Student st2 = { "qwer", 19, { {"math", Score(3)}, {"rus", Score(2)}} };
	Student st3 = { "asdf", 19, { {"math", Score(5)}, {"rus", Score(4)}} };
	Student st4 = { "zxcv", 18, { {"math", Score(4)}, {"rus", Score(5)}} };
	Groups groups;
	groups["first"] = { st1, st2 };
	groups["second"] = { st3, st4 };
	saveToFile("task3", groups);
	Groups res;
	loadFromFiles("task3", res);
	saveToFile("task3", res);
}
