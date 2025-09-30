function solution(my_string) {
    let answer = new Array(52).fill(0);
    for(let i = 0; i < my_string.length; i++){
        const c = my_string[i]
        if(c >= 'a') answer[c.charCodeAt() - 71]++
        else answer[c.charCodeAt() - 65]++
    }
    return answer;
}