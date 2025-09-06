function solution(num_list) {
    let mul = 1, sum = 0;
    for(let i of num_list){
        mul *= i;
        sum += i;
    }
    return sum * sum > mul ? 1 : 0;
}