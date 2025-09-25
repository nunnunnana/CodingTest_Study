function solution(my_string, n) {
    let answer = '';
    answer = my_string.substring(my_string.length - n, my_string.length);
    return answer;
}