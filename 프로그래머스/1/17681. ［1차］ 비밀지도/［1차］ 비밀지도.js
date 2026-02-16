function solution(n, arr1, arr2) {
    let answer = new Array(n).fill("");
    for(let i = 0; i < n; i++){
        let num = arr1[i] | arr2[i];
        for(let j = n - 1; j >= 0; j--){
            if(num & (1 << j)) answer[i] += "#";
            else answer[i] += " ";
        }
    }
    return answer;
}