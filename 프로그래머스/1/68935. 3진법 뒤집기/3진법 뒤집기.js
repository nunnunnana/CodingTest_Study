function solution(n) {
    let str = n.toString(3);
    let answer = parseInt(str.split('').reverse().join(''), 3)
    
    return answer;
}