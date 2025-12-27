function solution(n) {
    const answer = [];
    let s = n.toString();
    for(let i = s.length - 1; i >= 0; i--){
        answer.push(Number(s[i]));
    }
    return answer;
}