import java.util.*;

class Solution {
    public int[] solution(String s) {
        Map<Character, Integer> m = new HashMap<>();
        ArrayList<Integer> list = new ArrayList<>();
        for(int i = 0; i < s.length(); i++){
            if (m.containsKey(s.charAt(i))) list.add(i - m.get(s.charAt(i)));
            else list.add(-1);
            m.put(s.charAt(i), i);
        }
        
        int[] answer = new int[list.size()];
        for (int i = 0; i < list.size(); i++) {
            answer[i] = list.get(i);
        }
        
        return answer;
    }
}