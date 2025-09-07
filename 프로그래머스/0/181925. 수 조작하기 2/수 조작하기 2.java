class Solution {
    public String solution(int[] numLog) {
        StringBuilder sb = new StringBuilder();
        int num = numLog[0];
        for(int i = 1; i < numLog.length; i++){
            if(numLog[i] == num + 1){
                sb.append("w");
                num++;
            }
            else if(numLog[i] == num - 1){
                sb.append("s");
                num--;
            }
            else if(numLog[i] == num + 10){
                sb.append("d");
                num += 10;
            }
            else{
                sb.append("a");
                num -= 10;
            }
                
        }
        String result = sb.toString();
        return result;
    }
}