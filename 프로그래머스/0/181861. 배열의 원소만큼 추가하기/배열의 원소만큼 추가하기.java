import java.util.ArrayList;

class Solution {
    public int[] solution(int[] arr) {
        ArrayList<Integer> arrList = new ArrayList<>();
        for(int i = 0; i < arr.length; i++){
            for(int j = 0; j < arr[i]; j++){
                arrList.add(arr[i]);
            }
        }

        int[] answer = arrList.stream().mapToInt(Integer::intValue).toArray();
        return answer;
    }
}