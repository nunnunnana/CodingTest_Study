class Solution {
    public String[] solution(int n, int[] arr1, int[] arr2) {
        String[] answer = new String[n];
        for(int i = 0; i < n; i++){
            int num = arr1[i] | arr2[i];
            answer[i] = "";
            for(int j = n - 1; j >= 0; j--){
                if((num & (1 << j)) != 0) answer[i] += "#";
                else answer[i] += " ";
            }
        }
        return answer;
    }
}