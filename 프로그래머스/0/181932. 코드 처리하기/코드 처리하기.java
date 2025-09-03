class Solution {
    public String solution(String code) {
        boolean mode = false;
        String ret = "";
        for(int i = 0; i < code.length(); i++){
            char c = code.charAt(i);
            if(!mode){
                if(c != '1' && i % 2 == 0){
                    ret += code.charAt(i);
                }
                else if(c == '1') mode = true;
            }
            else{
                if(c != '1' && i % 2 == 1){
                    ret += code.charAt(i);
                }
                else if(c == '1') mode = false;
            }
        }
        if(ret.isEmpty()) ret = "EMPTY";
        return ret;
    }
}