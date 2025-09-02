function solution(ineq, eq, n, m) {
    let op = ineq + eq;
    let answer;
    if(op == ">=") answer = n >= m;
    else if(op == "<=") answer = n <= m;
    else if(op == ">!") answer = n > m;
    else answer = n < m;
    
    return Number(answer);
}