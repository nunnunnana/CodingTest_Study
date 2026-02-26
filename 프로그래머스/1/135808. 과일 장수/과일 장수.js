function solution(k, m, score) {
    let answer = 0;
    score.sort();
    
    for(let i = score.length - 1; i >= m - 1; i -= m){
        answer += score[i - m + 1] * m;
    }
    
    return answer;
}