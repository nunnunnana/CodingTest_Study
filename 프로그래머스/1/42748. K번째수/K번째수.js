function solution(array, commands) {
    let answer = [];
    for(let i = 0; i < commands.length; i++){
        const sub = array.slice(commands[i][0] - 1, commands[i][1]); 
        sub.sort((a, b) => a - b);
        answer.push(sub[commands[i][2] - 1]);
    }
    return answer;
}