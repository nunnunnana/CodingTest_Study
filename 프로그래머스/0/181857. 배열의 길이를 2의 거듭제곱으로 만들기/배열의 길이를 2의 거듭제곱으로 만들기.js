function solution(arr) {
    let n = arr.length;
    let idx = 1;
    
    while(idx < n){
        idx *= 2;
    }
    return arr.concat(Array(idx - n).fill(0));
}