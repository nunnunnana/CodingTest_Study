#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

int solution(string binomial) {
    istringstream iss(binomial);
    vector<string> tokens;
    string word;

    while (iss >> word) { 
        tokens.push_back(word);
    }

    if(tokens[1] == "+"){
        return stoi(tokens[0]) + stoi(tokens[2]);
    } else if(tokens[1] == "-"){
        return stoi(tokens[0]) - stoi(tokens[2]);
    } else{
        return stoi(tokens[0]) * stoi(tokens[2]);
    }
}