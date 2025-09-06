class Solution {
    public int solution(int[] num_list) {
        int mul = 1;
        int sum = 0;
        for(int i = 0; i < num_list.length; i++){
            mul *= num_list[i];
        }
        for(int i = 0; i < num_list.length; i++){
            sum += num_list[i];
        }
        if(mul > sum * sum) return 0;
        else return 1;
    }
}