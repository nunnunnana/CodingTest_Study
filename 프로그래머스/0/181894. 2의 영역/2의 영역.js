function solution(arr) {
    let min = -1, max = -1;
    for(let i = 0; i < arr.length; i++){
        if(arr[i] == 2){
            if(min == -1) min = i;
            max = i;
        }
    }
        
    if(min == -1) return [-1];
        
    const result = arr.slice(min, max + 1);
    return result;
}