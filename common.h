#pragma once
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int toInt(const string& numStr) {
    stringstream ss;
    ss << numStr;
    int num;
    ss >> num;
    return num;
}
int toInt(const char& numc) {
    string numStr;
    numStr.push_back(numc);
    return toInt(numStr);
}