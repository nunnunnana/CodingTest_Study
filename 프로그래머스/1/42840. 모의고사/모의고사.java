import java.util.*;

class Solution {
    public int[] solution(int[] answers) {
        int[] arr1 = {1, 2, 3, 4, 5};
        int[] arr2 = {2, 1, 2, 3, 2, 4, 2, 5};
        int[] arr3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
        int[] count = {0, 0, 0};
        for(int i = 0; i < answers.length; i++){
            if(answers[i] == arr1[i % 5]) count[0]++;
            if(answers[i] == arr2[i % 8]) count[1]++;
            if(answers[i] == arr3[i % 10]) count[2]++;
        }

        int max_val = count[0];
        for (int i = 0; i < 3; i++) {
            if (count[i] > max_val) {
                max_val = count[i];
            }
        }

        List<Integer> list = new ArrayList<>();
        for (int i = 0; i < 3; i++) {
            if (count[i] == max_val) {
                list.add(i + 1);
            }
        }
                     
        int[] answer = list.stream()
                            .mapToInt(Integer::intValue) 
                            .toArray();
        return answer;
    }
}