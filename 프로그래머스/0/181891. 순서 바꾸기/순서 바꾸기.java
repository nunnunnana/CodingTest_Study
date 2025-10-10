import java.util.Arrays;

class Solution {
    public int[] solution(int[] num_list, int n) {
        int[] array1 = Arrays.copyOfRange(num_list, n, num_list.length);
        int[] array2 = Arrays.copyOfRange(num_list, 0, n);
        int[] mergedArray = new int[array1.length + array2.length];

        System.arraycopy(array1, 0, mergedArray, 0, array1.length);
        System.arraycopy(array2, 0, mergedArray, array1.length, array2.length);
        return mergedArray;
    }
}