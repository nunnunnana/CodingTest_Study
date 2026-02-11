import java.util.*;

class Solution {
    public String[] solution(String[] strings, int n) {
        List<String> list = Arrays.asList(strings);
        
        list.sort((a, b) -> {
            return a.charAt(n) == b.charAt(n) ? 
                a.compareTo(b) : a.charAt(n) - b.charAt(n);
        });
        String[] answer = list.toArray(new String[0]);
        return answer;
    }
}