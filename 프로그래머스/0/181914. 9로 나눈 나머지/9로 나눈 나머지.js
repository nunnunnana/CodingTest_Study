function solution(number) {
    let answer = 0
    for(const i of number){
        answer += Number(i)
    }
    return answer % 9;
}