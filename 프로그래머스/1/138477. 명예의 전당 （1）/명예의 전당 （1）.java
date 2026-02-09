import java.util.*;

class Solution {
    public int[] solution(int k, int[] score) {
        int[] answer = new int[score.length];
        List<Integer> temp = new ArrayList<>();
        for(int i = 0; i < score.length; i++){
            temp.add(score[i]);
            Collections.sort(temp); 
            if(temp.size() <= k) answer[i] = temp.get(0);
            else answer[i] = temp.get(temp.size() - k);

        }
        return answer;
    }
}