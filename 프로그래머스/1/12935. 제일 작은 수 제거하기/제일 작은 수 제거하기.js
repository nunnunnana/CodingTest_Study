function solution(arr) {
    const min = Math.min(...arr);
    const idx = arr.indexOf(min);

    if(idx !== -1) arr.splice(idx, 1);
    if(arr.length === 0) return [-1];
    else return arr;
}