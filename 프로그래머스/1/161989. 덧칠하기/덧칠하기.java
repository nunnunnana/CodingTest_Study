class Solution {
    public int solution(int n, int m, int[] section) {
        int answer = 1;
        int pivot = section[0];
        for(int i = 0; i < section.length; i++){
            if(pivot + m > section[i]) continue;
            else {
                pivot = section[i];
                answer++;
            }
        }
        return answer;
    }
}