class Solution {
    public long solution(long n) {
        if(Math.sqrt(n) == Math.floor(Math.sqrt(n))) return (long)((Math.sqrt(n) + 1) * (Math.sqrt(n) + 1));
        else return -1;
    }
}