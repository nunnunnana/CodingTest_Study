function GetGCD(a, b){
    return a % b == 0 ? b : GetGCD(b, a % b);
}

function solution(n, m) {
    const gcd = GetGCD(n, m);
    const lcm = (n * m) / gcd; 
    return [gcd, lcm];
}