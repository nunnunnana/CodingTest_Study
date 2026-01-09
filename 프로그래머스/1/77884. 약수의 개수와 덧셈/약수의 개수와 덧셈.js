function solution(left, right) {
    let answer = 0;
    for(let i = left; i <= right; i++){
        let s = Math.floor(Math.sqrt(i));
        
        if(s * s == i) answer -= i;
        else answer += i;
    }
    return answer;
}