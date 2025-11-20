function solution(order) {
    let answer = 0;
    for(let i of order){
        answer += i.includes("latte") ? 5000 : 4500;
    }
    return answer;
}