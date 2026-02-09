function solution(k, score) {
    let answer = [];
    let temp = [];
    for(let i = 0; i < score.length; i++){
        temp.push(score[i]);
        temp.sort((a, b) => a - b);
        if(temp.length <= k) answer.push(temp[0]);
        else answer.push(temp[temp.length - k]);
        
    }
    return answer;
}