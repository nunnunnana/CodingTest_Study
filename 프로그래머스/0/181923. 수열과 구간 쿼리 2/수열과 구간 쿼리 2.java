class Solution {
    public int[] solution(int[] arr, int[][] queries) {
        int[] answer = new int[queries.length];
        for(int i = 0; i < queries.length; i++){
            int s = queries[i][0];
            int e = queries[i][1];
            int k = queries[i][2];
            int result = -1;
            for(int j = s; j <= e; j++){
                if(arr[j] > k){
                    if(result == -1) result = arr[j];
                    else if(arr[j] < result) result = arr[j];
                }
            }
            answer[i] = result;
        }
        return answer;
    }
}