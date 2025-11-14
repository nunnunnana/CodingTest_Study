function solution(arr, delete_list) {
    for(let i of delete_list){
        arr = arr.filter((e) => e !== i);
    }
    return arr;
}