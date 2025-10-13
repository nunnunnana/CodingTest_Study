import java.util.Arrays;

class Solution {
    public int solution(int[] arr) {
        int count = 0;
        int[] temp = {};
        while(true){
            temp = Arrays.copyOf(arr, arr.length);
            for(int i = 0; i < arr.length; i++){
                if(arr[i] >= 50 && arr[i] % 2 == 0){
                    arr[i] /= 2;
                }
                else if(arr[i] < 50 && arr[i] % 2 != 0){
                    arr[i] = arr[i] * 2 + 1;
                }
            }
            if(Arrays.equals(arr, temp)) return count;
            
            count++;
        }
    }
}