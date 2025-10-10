function solution(arr, queries) {
    let answer = arr;
    for(let i = 0; i < queries.length; i++){
        for(let j = queries[i][0]; j <= queries[i][1]; j++){
            answer[j]++;
        }
    }
    return answer;
}