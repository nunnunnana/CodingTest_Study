function solution(my_string) {
    let answer = []
    answer.length = 52
    answer.fill(0); 
    for(let i = 0; i < my_string.length; i++){
        const c = my_string[i]
        if(c >= 'a') answer[c.charCodeAt() - 'a'.charCodeAt() + 26]++
        else answer[c.charCodeAt() - 'A'.charCodeAt()]++
    }
    return answer;
}