class Solution {
    public int[] solution(int[] arr) {
        int minIdx = 0;
        int min = arr[0];
        
        for(int i = 1; i < arr.length; i++){
            if(arr[i] < min){
                min = arr[i];
                minIdx = i;
            }
        }
        
        int[] answer = new int[arr.length - 1];
        for (int i = 0, j = 0; i < arr.length; i++) {
            if (i != minIdx) answer[j++] = arr[i];
        }
        if(answer.length == 0) return new int[]{-1};
        return answer;
    }
}