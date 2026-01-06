function solution(s) {
    let answer = "";
    if(s.length % 2 === 0) answer += s[s.length / 2 - 1];
    return answer += s[Math.floor(s.length / 2)];
}