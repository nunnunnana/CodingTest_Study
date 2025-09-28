
class Solution {
    public int solution(String my_string, String is_suffix) {
        String[] answer = new String[my_string.length()];
        for(int i = 0; i < my_string.length(); i++){
            answer[i] = my_string.substring(i, my_string.length());
        }
        
        for(int i = 0; i < answer.length; i++){
            if(is_suffix.equals(answer[i])) return 1;
        }
        return 0;
    }
}