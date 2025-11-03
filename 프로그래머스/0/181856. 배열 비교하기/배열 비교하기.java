import java.util.Arrays;

class Solution {
    public int solution(int[] arr1, int[] arr2) {
        int sum1 = Arrays.stream(arr1).sum();
        int sum2 = Arrays.stream(arr2).sum();
        if (arr1.length == arr2.length){
            if(sum1 == sum2) return 0;
            else return sum1 > sum2 ? 1 : -1;
        } else return arr1.length > arr2.length ? 1 : -1;
    }
}