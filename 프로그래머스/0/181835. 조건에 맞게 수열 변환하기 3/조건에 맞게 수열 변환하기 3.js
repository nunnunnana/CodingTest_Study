function solution(arr, k) {
    if(k % 2 == 0){
        for(let i = 0; i < arr.length; i++){
            arr[i] += k;
        }
    } else {
        for(let i = 0; i < arr.length; i++){
            arr[i] *= k;
        }
    }
    return arr;
}