import java.util.Arrays;

class Solution {
    public int solution(String[] strArr) {
        int[] answer = new int[31];
        for(int i = 0; i < strArr.length; i++){
            answer[strArr[i].length()]++;
        }
        int max = Arrays.stream(answer).max().getAsInt();
        return max;
    }
}