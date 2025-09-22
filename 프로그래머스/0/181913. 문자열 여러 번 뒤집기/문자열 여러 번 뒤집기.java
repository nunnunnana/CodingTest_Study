class Solution {
    public String solution(String my_string, int[][] queries) {
        String answer = my_string;
        for(int i = 0; i < queries.length; i++){
            int s = queries[i][0];
            int e = queries[i][1];

            char[] arr = answer.toCharArray(); 
            while (s < e) {
                char temp = arr[s];
                arr[s++] = arr[e];
                arr[e--] = temp;
            }
            answer = new String(arr); 
        }
        return answer;
    }
}