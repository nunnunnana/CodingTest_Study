function solution(arr) {
    const n = Math.max(arr.length, arr[0].length);
    const result = arr.map(r => [...r, ...Array(n - arr[0].length).fill(0)]);

    for(let i = arr.length; i < n; i++){
        result.push(Array(n).fill(0));
    }

    return result;
}
