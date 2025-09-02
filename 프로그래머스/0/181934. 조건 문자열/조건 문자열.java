class Solution {
    public int solution(String ineq, String eq, int n, int m) {
        int result = 0;
        String op = ineq + eq;
        switch(op){
                case "<=":
                    if(n <= m) result = 1;
                    break;
                case ">=":
                    if(n >= m) result = 1;
                    break;
                case "<!":
                    if(n < m) result = 1;
                    break;
                case ">!":
                    if(n > m) result = 1;
                    break;
        }
        return result;
    }
}