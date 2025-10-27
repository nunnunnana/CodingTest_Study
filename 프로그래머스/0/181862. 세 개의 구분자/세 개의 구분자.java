class Solution {
    public String[] solution(String myStr) {
        String trimmed = myStr.replaceAll("[abc]", " ").trim();
        if (trimmed.isEmpty()) return new String[]{"EMPTY"};
        return trimmed.split("\\s+");
    }
}
