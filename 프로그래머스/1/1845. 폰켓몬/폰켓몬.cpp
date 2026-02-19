#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    set<int> s;
    s.insert(nums.begin(), nums.end());
    return s.size() > nums.size() / 2 ? nums.size() / 2 : s.size();
}