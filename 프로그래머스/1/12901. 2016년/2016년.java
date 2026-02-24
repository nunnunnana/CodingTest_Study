class Solution {
    public String solution(int a, int b) {
        String[] week = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
        int[] month = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int n = 0;
        for(int i = 0; i < a - 1; i++){
            n += month[i];
        }
        return week[(n + b + 4) % 7];
    }
}