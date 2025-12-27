import java.util.ArrayList;

class Solution {
    public int[] solution(long n) {
        ArrayList<Integer> list = new ArrayList<>();
        String str = String.valueOf(n);
        for(int i = str.length() - 1; i >= 0; i--){
            list.add(str.charAt(i) - '0');
        }
        
        int[] answer = new int[list.size()];
        for (int i = 0; i < list.size(); i++) {
            answer[i] = list.get(i);
        }
        
        return answer;
    }
}