function solution(arr) {
    let answer = [];
    for(const i of arr){
        if(answer.length != 0 && answer.at(-1) == i){
            answer.pop();
        } else {
            answer.push(i);
        }
    }
    return answer.length == 0 ? [-1] : answer;
}