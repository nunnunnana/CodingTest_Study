function solution(n) {
    const result = String(n)
      .split('')
      .sort((a, b) => b - a)
      .join('');
    const answer = Number(result);
    return answer;
}