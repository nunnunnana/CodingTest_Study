function solution(s) {
    let sortedStr = s.split('').sort().reverse().join('');
    return sortedStr;
}