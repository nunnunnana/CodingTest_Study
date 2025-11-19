class Solution {
    public int solution(int a, int b) {
        int sum = a + b;
        if(sum % 2 == 0){
            if(a % 2 != 0) return a * a + b * b;
            else return Math.abs(a - b);
        } else {
            return 2 * sum;
        }
    }
}