function solution(arr) {
    let count = 0;
    let temp = {};
    while(true){
        temp = arr.slice();
        for(let i = 0; i < arr.length; i++){
            if(arr[i] >= 50 && arr[i] % 2 == 0){
                arr[i] /= 2;
            }
            else if(arr[i] < 50 && arr[i] % 2 != 0){
                arr[i] = arr[i] * 2 + 1;
            }
        }
        if(JSON.stringify(temp) === JSON.stringify(arr)) return count;
        count++;
    }
}