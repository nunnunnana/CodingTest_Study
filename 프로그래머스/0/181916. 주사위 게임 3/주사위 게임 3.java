import java.util.*;

class Solution {
    public int solution(int a, int b, int c, int d) {
        int dice[] = new int[7];
        dice[a]++; dice[b]++; dice[c]++; dice[d]++;
        
        List<Integer> nums = new ArrayList<>();
        for (int i = 1; i <= 6; i++) {
            if (dice[i] > 0) nums.add(i);
        }
        
        if(nums.size() == 1){
            return 1111 * a;
        }
        
        else if(nums.size() == 2){
            int p = nums.get(0);
            int q = nums.get(1);
            
            if(dice[p] == 3) return (int)Math.pow(10 * p + q, 2);
            if(dice[q] == 3) return (int)Math.pow(10 * q + p, 2);
            return (p + q) * Math.abs(p - q);
        }
        
        else if(nums.size() == 3){
            int result = 1;
            for (int i = 1; i <= 6; i++) {
                if (dice[i] == 1) result *= i;
            }
            return result;
        }
        
        else{
            return Collections.min(nums);
        }
    }
}