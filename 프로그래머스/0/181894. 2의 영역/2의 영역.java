import java.util.ArrayList;
import java.util.List;

class Solution {
    public int[] solution(int[] arr) {
        List<Integer> list = new ArrayList<>();
        int min = -1, max = -1;
        for(int i = 0; i < arr.length; i++){
            if(arr[i] == 2){
                if(min == -1) min = i;
                else if(i > max) max = i;
            }
        }
        
        if(min == -1 && max == -1) list.add(-1);
        else if(min > 0 && max == -1) list.add(arr[min]);
        else{
            for(int i = min; i <= max; i++){
                list.add(arr[i]);
            }
        }
        
        int[] answer = new int[list.size()];
        for(int i = 0 ; i < list.size() ; i++){
            answer[i] = list.get(i).intValue();
        }
        return answer;
    }
}