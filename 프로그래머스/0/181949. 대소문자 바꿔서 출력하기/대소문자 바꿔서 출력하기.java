import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        char[] arr = a.toCharArray();
        for(int i = 0; i < a.length(); i++){
            // char c = a.charAt(i);
            if(arr[i] - 'A' >= 32) arr[i] -= 32;
            else arr[i] += 32;
            // System.out.print(c);
        }
        a = new String(arr);
        System.out.println(arr);
    }
}