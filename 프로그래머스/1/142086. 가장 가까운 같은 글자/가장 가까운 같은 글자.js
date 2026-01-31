function solution(s) {
    let m = new Map();
    let answer = [];
    for(let i = 0; i < s.length; i++){
        if (m.has(s[i])) answer.push(i - m.get(s[i]));
        else answer.push(-1);
        m.set(s[i], i);
    }
    return answer;
}