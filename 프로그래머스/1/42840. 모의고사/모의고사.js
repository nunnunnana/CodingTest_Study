function solution(answers) {
    let arr1 = [1, 2, 3, 4, 5];
    let arr2 = [2, 1, 2, 3, 2, 4, 2, 5];
    let arr3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5];
    let count = [0, 0, 0];
    for(let i = 0; i < answers.length; i++){
        if(answers[i] == arr1[i % 5]) count[0]++;
        if(answers[i] == arr2[i % 8]) count[1]++;
        if(answers[i] == arr3[i % 10]) count[2]++;
    }
    
    let max_val = count[0];
    for (let i = 0; i < 3; i++) {
        if (count[i] > max_val) {
            max_val = count[i];
        }
    }
    
    let answer = [];
    for (let i = 0; i < 3; i++) {
        if (count[i] == max_val) {
            answer.push(i + 1);
        }
    }
    return answer;
}