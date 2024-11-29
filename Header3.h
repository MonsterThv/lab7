#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

enum Score
{
    Unsatisfactorily = 2,
    Satisfactorily,
    Good,
    Excellent
};

struct Student
{
    std::string Name;
    int Year;
    std::map<std::string, Score> RecordBook;
};

using Groups = std::map<std::string, std::vector<Student>>;

void saveToFile(const std::string& filename, const Groups& groups);
void loadFromFiles(const std::string& filename, Groups& outGroups);