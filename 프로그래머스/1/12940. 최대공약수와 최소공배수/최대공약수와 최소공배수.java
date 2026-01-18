class Solution {
    private int GetGCD(int a, int b){
        return a % b == 0 ? b : GetGCD(b, a % b);
    }
    
    public int[] solution(int n, int m) {
        int gcd = GetGCD(n, m);
        int lcm = (n * m) / gcd; 
        return new int[]{gcd, lcm};
    }
}