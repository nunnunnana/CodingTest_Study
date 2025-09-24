import java.util.ArrayList;
import java.util.List;
class Solution {
    public int[] solution(String[] intStrs, int k, int s, int l) {
        List<Integer> answer = new ArrayList<>();
        for(int i = 0; i < intStrs.length; i++){
            int intStr = Integer.parseInt(intStrs[i].substring(s, s + l));
            if(intStr > k) answer.add(intStr);
        }
        int[] intArray = answer.stream()
                                     .mapToInt(i -> i)
                                     .toArray();
        return intArray;
    }
}