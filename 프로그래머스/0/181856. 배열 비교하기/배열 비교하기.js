function solution(arr1, arr2) {
    const sum1 = arr1.reduce((accumulator, n) => accumulator + n, 0);
    const sum2 = arr2.reduce((accumulator, n) => accumulator + n, 0);    

    if (arr1.length == arr2.length){
        if(sum1 == sum2) return 0;
        else return sum1 > sum2 ? 1 : -1;
    } else return arr1.length > arr2.length ? 1 : -1;
}