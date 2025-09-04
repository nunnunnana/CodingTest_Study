function solution(a, d, included) {
    let answer = 0;
    for(let i of included){
        if(i) answer += a;
        a += d;
    }
    return answer;
}