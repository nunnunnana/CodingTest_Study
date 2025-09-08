function solution(arr, queries) {
    let answer = arr;
    let temp = 0;
    for(const i of queries){
        temp = answer[i[0]];
        answer[i[0]] = answer[i[1]];
        answer[i[1]] = temp;
    }
    return answer;
}