#include <iostream>
#include <string>
#include <vector>

using namespace std;

void replaceAll(string& str, const string& from, const string& to) {
    if(from.empty()) return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

int solution(string s) {
    replaceAll(s, "zero", "0");
    replaceAll(s, "one", "1");
    replaceAll(s, "two", "2");
    replaceAll(s, "three", "3");
    replaceAll(s, "four", "4");
    replaceAll(s, "five", "5");
    replaceAll(s, "six", "6");
    replaceAll(s, "seven", "7");
    replaceAll(s, "eight", "8");
    replaceAll(s, "nine", "9");
    
    return stoi(s);
}