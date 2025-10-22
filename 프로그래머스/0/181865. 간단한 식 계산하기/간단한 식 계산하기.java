class Solution {
    public int solution(String binomial) {
        String[] tokens = binomial.trim().split("\\s+");
        int x = Integer.parseInt(tokens[0]);
        int y = Integer.parseInt(tokens[2]);
        
        if(tokens[1].equals("+")){
            return x + y;
        } else if(tokens[1].equals("-")){
            return x - y;
        } else{
            return x * y;
        }
    }
}