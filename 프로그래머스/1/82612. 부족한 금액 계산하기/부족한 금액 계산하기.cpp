using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = (long long)(count * (count + 1) / 2) * price;
    return money - answer > 0 ? 0 : answer - money;
}