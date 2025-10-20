import java.util.Arrays;
import java.util.ArrayList;

class Solution {
    public String[] solution(String myString) {
        ArrayList<String> list = new ArrayList<>();
        String str = "";
        for (char c : myString.toCharArray()) {
            if (c == 'x') {
                if (!str.isEmpty()) {
                    list.add(str);
                    str = "";
                }
            } else {
                str += c;
            }
        }
        if(!str.isEmpty()) list.add(str);
        String answer[] = list.toArray(new String[list.size()]);
        Arrays.sort(answer);
        return answer;
    }
}