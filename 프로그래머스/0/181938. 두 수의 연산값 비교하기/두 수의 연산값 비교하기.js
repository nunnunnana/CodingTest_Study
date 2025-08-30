function solution(a, b) {
    let first, second;
    first = Number(a.toString() + b.toString());
    second = 2 * a * b;
    return (first > second) ? first : second;
}