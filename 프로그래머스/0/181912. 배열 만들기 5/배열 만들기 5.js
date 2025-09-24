function solution(intStrs, k, s, l) {
    let answer = [];
    for(const str of intStrs){
        let i = Number(str.slice(s, s + l))
        if(i > k) answer.push(i)
    }
    return answer;
}