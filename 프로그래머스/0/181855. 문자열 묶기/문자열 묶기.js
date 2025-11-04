function solution(strArr) {
    let arr;
    (arr = []).length = 31;
    arr.fill(0);
    for(let i = 0; i < strArr.length; i++){
        arr[strArr[i].length]++;
    }
    return Math.max(...arr);
}