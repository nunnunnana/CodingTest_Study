function solution(num_list) {
    let even = '', odd = '';
    for(const i of num_list){
        if(i % 2 == 0) even += i;
        else odd += i;
    }
    return Number(even) + Number(odd);
}