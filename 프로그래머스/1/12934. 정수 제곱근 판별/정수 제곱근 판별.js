function solution(n) {
    if(Math.sqrt(n) % 1 == 0) return (Math.sqrt(n) + 1) * (Math.sqrt(n) + 1);
    else return -1;
}