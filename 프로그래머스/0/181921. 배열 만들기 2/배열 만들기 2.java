import java.util.*;

class Solution {
    public int[] solution(int l, int r) {
        ArrayList<Integer> result = new ArrayList<>();
        
        for(int i = 1; i < 64; i++){
            int num = Integer.parseInt(Integer.toBinaryString(i)) * 5;
            if(num >= l && num <= r){
                result.add(num);
            }
        }
        
        return result.isEmpty() ? new int[] { -1 } : result.stream().mapToInt(i -> i).toArray();
    }
}