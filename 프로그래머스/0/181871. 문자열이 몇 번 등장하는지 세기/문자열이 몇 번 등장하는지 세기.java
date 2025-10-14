class Solution {
    public int solution(String myString, String pat) {
        int index = -1;
        int count = 0;
        for(int i = 0; i < myString.length(); i++){
            if(myString.indexOf(pat, i) == -1) return count;

            if(myString.indexOf(pat, i) == index) continue;
            else {
                index = myString.indexOf(pat, i);
                count++;
            }
        }
        return count;
    }
}