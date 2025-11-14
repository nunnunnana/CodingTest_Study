import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

class Solution {
    public int[] solution(int[] arr, int[] delete_list) {
        List<Integer> list = new ArrayList<>();
        for(int i = 0; i < arr.length; i++){
            for(int j = 0; j < delete_list.length; j++){
                if(arr[i] == delete_list[j]) break;
                if(j == delete_list.length - 1) list.add(arr[i]);
            }
        }
        
        int[] answer = list.stream()
                            .mapToInt(Integer::intValue)
                            .toArray();
        return answer;
    }
}