function solution(a, b, c) {
    let count = 1, answer = 1;
    
    if(a == b && b == c) count++;
    if(a == b || b == c || a == c) count++;
    for(let i = 1; i <= count; i++){
        answer *= Math.pow(a, i) + Math.pow(b, i) + Math.pow(c, i);
    }
    return answer;
}