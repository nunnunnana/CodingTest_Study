function solution(myString) {
    let answer = "";
    for(let i = 0; i < myString.length; i++){
        if(myString[i] < 'l'){
            answer += 'l';
        } else {
            answer += myString[i];
        }
    }
    return answer;
}