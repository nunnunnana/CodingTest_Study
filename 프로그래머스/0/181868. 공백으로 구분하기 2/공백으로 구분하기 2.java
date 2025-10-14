import java.util.*;
import java.util.stream.*;

class Solution {
    public String[] solution(String my_string) {
        String[] answer = my_string.split(" ");
        answer = Arrays.stream(answer)
                        .filter(s -> s != null && !s.isEmpty())
                        .toArray(String[]::new);
        return answer;
    }
}