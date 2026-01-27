class Solution {
    public String solution(String s) {
        String answer = "";
        int idx = 0;

        for(char c : s.toCharArray()){
            if(c == ' '){
                answer += " ";
                idx = 0;
            } else {
                answer += idx % 2 == 0 ? Character.toUpperCase(c) : Character.toLowerCase(c);
                idx++;
            }
        }
        return answer;
    }
}