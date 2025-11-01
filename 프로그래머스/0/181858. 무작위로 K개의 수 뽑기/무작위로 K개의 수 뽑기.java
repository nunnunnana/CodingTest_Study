import java.util.ArrayList;

class Solution {
    public int[] solution(int[] arr, int k) {
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 0; i < arr.length; i++) {
            if (list.size() == k) break;        // ✅ k개 채우면 즉시 종료
            if (!list.contains(arr[i])) {
                list.add(arr[i]);                // ✅ 고유값만 추가
            }
        }

        while (list.size() < k) {                // ✅ 부족하면 -1로 채우기
            list.add(-1);
        }

        int[] answer = new int[k];               // ✅ 결과 길이를 항상 k로 고정
        for (int i = 0; i < k; i++) {
            answer[i] = list.get(i);
        }
        return answer;
    }
}
