function solution(myString) {
    let answer = [];
    let str = "";
    for (let c of myString) {
        if (c == 'x') {
            if (str != "") {
                answer.push(str);
                str = "";
            }
        } else {
            str += c;
        }
    }
    if(str != "") answer.push(str);
    return answer.sort();
}