function solution(price, money, count) {
    const answer = (count * (count + 1) / 2) * price;
    return money - answer > 0 ? 0 : answer - money;
}