function solution(arr, queries) {
    let answer = [];
    for(let i = 0; i < queries.length; i++){
        let s = queries[i][0]
        let e = queries[i][1]
        let k = queries[i][2]
        let result = -1;
        for(let j = s; j <= e; j++){
            if(arr[j] > k){
                if(result == -1 || arr[j] < result) result = arr[j];
            }
        }
        answer.push(result);
    }
        
    return answer;
}