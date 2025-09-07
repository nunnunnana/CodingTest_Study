function solution(numLog) {
    let answer = '';
    let num = numLog[0]
    for(let i = 1; i < numLog.length; i++){
        if(numLog[i] == num + 1){
            answer += 'w';
            num++;
        }
        else if(numLog[i] == num - 1){
            answer += 's';
            num--;
        }
        else if(numLog[i] == num + 10){
            answer += 'd';
            num += 10;
        }
        else {
            answer += 'a';
            num -= 10;
        }
    }
    return answer;
}