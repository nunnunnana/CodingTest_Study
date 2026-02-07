function solution(food) {
    let answer = "";
    for(let i = 1; i < food.length; i++){
        for(let j = 0; j <= food[i] / 2 - 1; j++){
            answer += i; 
        }
    }
    const str = answer.split("").reverse().join("");
    answer += "0" + str;
    return answer;
}