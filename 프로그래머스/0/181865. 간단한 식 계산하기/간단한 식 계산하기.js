function solution(binomial) {
    let answer = 0;
    let tokens = binomial.trim().split(/\s+/);
    if(tokens[1] == "+"){
        return Number(tokens[0]) + Number(tokens[2]);
    } else if(tokens[1] == "-"){
        return tokens[0] - tokens[2];
    } else{
        return tokens[0] * tokens[2];
    }
}