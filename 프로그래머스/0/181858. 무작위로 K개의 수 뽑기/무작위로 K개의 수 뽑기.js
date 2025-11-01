function solution(arr, k) {
    let answer = [];
    for(let i = 0; i < arr.length; i++){
        if (answer.length == k){
            return answer;
        }
        if(!answer.includes(arr[i])){
            answer.push(arr[i]);
        } 
    }
    answer.length = k;
    answer = Array.from(answer, v => v === undefined ? -1 : v);
    return answer;
}