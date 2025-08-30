class Solution {
    public int solution(int a, int b) {
        int first, second;
        first = Integer.parseInt("" + a + b);
        second = 2 * a * b;
        return (first > second) ? first : second;
    }
}