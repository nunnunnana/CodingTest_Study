class Solution {
    public int solution(int a, int b) {
        int first, second;
        first = Integer.parseInt("" + a + b);
        second = Integer.parseInt("" + b + a);
        return (first > second) ? first : second;
    }
}