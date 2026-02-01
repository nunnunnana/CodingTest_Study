class Solution {
    public String solution(String s, int n) {
        String answer = "";
        for(int i = 0; i < s.length(); i++){
            char z = 'z';
            if(s.charAt(i) == ' '){
                answer += " ";
                continue;
            }
            z = Character.isUpperCase(s.charAt(i)) ? 'Z' : 'z';
            if(s.charAt(i) + n > z){
                answer += (char)((s.charAt(i) - 26) + n);
            }
            else answer += (char)(s.charAt(i) + n);
        }
        return answer;
    }
}