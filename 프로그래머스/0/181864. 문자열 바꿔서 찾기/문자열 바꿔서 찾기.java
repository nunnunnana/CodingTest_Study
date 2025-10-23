class Solution {
    public int solution(String myString, String pat) {
        char[] arr = myString.toCharArray();

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 'A') arr[i] = 'B';
            else arr[i] = 'A';
        }

        String result = new String(arr);
        return result.contains(pat) ? 1 : 0;
    }
}