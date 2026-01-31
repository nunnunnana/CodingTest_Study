import java.util.*;

class Solution {
    public int[] solution(String s) {
        Map<Character, Integer> m = new HashMap<>();
        int[] answer = new int[s.length()];
        for(int i = 0; i < s.length(); i++){
            if (m.containsKey(s.charAt(i))) answer[i] = (i - m.get(s.charAt(i)));
            else answer[i] = -1;
            m.put(s.charAt(i), i);
        }
        
        return answer;
    }
}