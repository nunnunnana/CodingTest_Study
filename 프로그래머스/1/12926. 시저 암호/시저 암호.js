function solution(s, n) {
    let answer = "";
    for(let i = 0; i < s.length; i++){
        if(s[i] == ' '){
            answer += " ";
            continue;
        }
        const z = s[i] === s[i].toUpperCase() ? 'Z' : 'z';
        if(s.charCodeAt(i) + n > z.charCodeAt(0)){
            answer += String.fromCharCode(s.charCodeAt(i) - 26 + n);
        }
        else answer += String.fromCharCode(s.charCodeAt(i) + n);
    }
    return answer;
}