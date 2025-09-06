class Solution {
    public int solution(int[] num_list) {
        String even = "", odd = "";
        for(int i = 0; i < num_list.length; i++){
            if(num_list[i] % 2 == 0) even += num_list[i];
            else odd += num_list[i];
        }
        int a = Integer.parseInt(even);
        int b = Integer.parseInt(odd);
        return a + b;
    }
}