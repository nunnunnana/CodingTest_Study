function solution(picture, k) {
    let answer = [];

    for (let i = 0; i < k * picture.length; i++) {
        let str = "";
        for (let j = 0; j < k * picture[0].length; j++) {
            str += picture[Math.floor(i / k)][Math.floor(j / k)];
        }
        answer.push(str);
    }

    return answer;
}
