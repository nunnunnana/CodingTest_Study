import java.util.ArrayList;

class Solution {
    public int[] solution(int[] arr) {
        ArrayList<Integer> arrList = new ArrayList<Integer>();
        for(int i = 0; i < arr.length; i++){
            if(!arrList.isEmpty() && arrList.get(arrList.size() - 1) == arr[i]){
                arrList.remove(arrList.size() - 1);
            } else {
                arrList.add(arr[i]);
            }
        }
        if(arrList.isEmpty()) arrList.add(-1);
        int[] answer = arrList.stream().mapToInt(Integer::intValue).toArray();
        return answer;
    }
}