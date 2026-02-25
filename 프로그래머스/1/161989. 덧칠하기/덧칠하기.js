function solution(n, m, section) {
    let answer = 1;
    let pivot = section[0];
    for(let i = 0; i < section.length; i++){
        if(pivot + m > section[i]) continue;
        else {
            pivot = section[i];
            answer++;
        }
    }
    return answer;
}