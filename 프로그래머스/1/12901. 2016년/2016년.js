function solution(a, b) {
    let week = ["SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"];
    let month = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
    let n = 0;
    for(let i = 0; i < a - 1; i++){
        n += month[i];
    }
    return week[(n + b + 4) % 7];
}