function solution(num_list, n) {
    let answer = [];
    for(let i = 0; i < num_list.length; i++){
        if(n == num_list.length) n = 0;
        answer.push(num_list[n]);
        n++;
    }
    return answer;
}