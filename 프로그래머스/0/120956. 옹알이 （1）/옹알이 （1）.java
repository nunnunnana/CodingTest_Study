class Solution {
    public int solution(String[] babbling) {
        int answer = 0;
        for(String s : babbling){
            if(s.contains("aya")){
                s = s.replace("aya", " ");
            }
            if(s.contains("ye")){
                s = s.replace("ye", " ");
            }
            if(s.contains("woo")){
                s = s.replace("woo", " ");
            }
            if(s.contains("ma")){
                s = s.replace("ma", " ");
            }
            if (s.trim().isEmpty()) answer++;
        }
        return answer;
    }
}