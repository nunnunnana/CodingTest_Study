function solution(a, b, n) {
    return (n > b ? Math.floor((n - b) / (a - b)) * b : 0);
}