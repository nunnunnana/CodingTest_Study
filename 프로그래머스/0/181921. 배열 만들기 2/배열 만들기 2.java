import java.util.*;

class Solution {
    public int[] solution(int l, int r) {
        List<Integer> result = new ArrayList<>();
        Queue<String> queue = new LinkedList<>();
        
        queue.add("5");
        
        while(!queue.isEmpty()){
            String cur = queue.poll();
            int num = Integer.parseInt(cur);
            
            if (num > r) continue;
            
            if(num >= l && num <= r){
                result.add(num);
            }
            
            if(num * 10 <= r){
                queue.add(cur + "5");
                queue.add(cur + "0");
            }
        }
        
        if (result.isEmpty()) {
            return new int[]{-1};
        }
        
        Collections.sort(result);
        
        return result.stream().mapToInt(Integer::intValue).toArray();
    }
}