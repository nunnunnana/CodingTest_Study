function solution(my_string, overwrite_string, s) {
    let before = my_string.substring(0, s);
    let after = overwrite_string + my_string.substring(overwrite_string.length + s);
    return before + after;
}