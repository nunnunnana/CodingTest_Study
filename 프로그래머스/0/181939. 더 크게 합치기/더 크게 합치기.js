function solution(a, b) {
    let first, second;
    first = a.toString() + b.toString();
    second = b.toString() + a.toString();
    if(Number(first) > Number(second)) return Number(first);
    else return Number(second);
}