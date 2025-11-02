class Solution {
    public int[] solution(int[] arr) {
        int n = 0;
        int idx = arr.length;
        while(idx != 1 << n){
            if(idx > 1 << n) n++;
            else if (idx < 1 << n) idx++;
        }
        int[] answer = new int[idx];
        for (int i = 0; i < arr.length; i++) {
            answer[i] = arr[i];
        }
        return answer;
    }
}