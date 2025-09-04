class Solution {
    private int calculation(int a, int b, int c, int r){
        int result = 1;
        for(int i = 1; i <= r; i++){
            result *= Math.pow(a, i) + Math.pow(b, i) + Math.pow(c, i);
        }
        return result;
    }
    public int solution(int a, int b, int c) {
        if(a == b && a == c && b == c){
            return calculation(a, b, c, 3);
        }
        else if(a != b && a != c && b != c){
            return calculation(a, b, c, 1);
        }
        else return calculation(a, b, c, 2);
    }
}