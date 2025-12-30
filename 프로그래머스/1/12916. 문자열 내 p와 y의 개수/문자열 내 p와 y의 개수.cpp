#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

bool solution(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int countP = count(s.begin(), s.end(), 'p');
    int countY = count(s.begin(), s.end(), 'y');
    return countP == countY ? true : false;

}