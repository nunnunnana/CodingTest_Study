import java.util.*;
class Solution {
    public String[] solution(String[] picture, int k) {
        List<String> answer = new ArrayList<>();

        int h = picture.length;
        int w = picture[0].length();

        for (int i = 0; i < h * k; i++) {
            StringBuilder sb = new StringBuilder();
            for (int j = 0; j < w * k; j++) {
                sb.append(picture[i / k].charAt(j / k));
            }
            answer.add(sb.toString());
        }

        return answer.toArray(new String[0]);
    }
}