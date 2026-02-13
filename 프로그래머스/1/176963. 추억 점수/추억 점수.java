import java.util.*;

class Solution {
    public int[] solution(String[] name, int[] yearning, String[][] photo) {
        int[] answer = new int[photo.length];
        for(int i = 0; i < photo.length; i++){
            int score = 0;
            for(int j = 0; j < name.length; j++){
                if(Arrays.asList(photo[i]).contains(name[j])) score += yearning[j];
            }
            answer[i] = score;
        }
        return answer;
    }
}