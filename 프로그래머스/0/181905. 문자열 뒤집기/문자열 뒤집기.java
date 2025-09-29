class Solution {
    public String solution(String my_string, int s, int e) {
        String answer = my_string;
        char[] arr = answer.toCharArray(); 
        while (s < e) {
            char temp = arr[s];
            arr[s++] = arr[e];
            arr[e--] = temp;
        }
        answer = new String(arr); 
        return answer;
    }
}