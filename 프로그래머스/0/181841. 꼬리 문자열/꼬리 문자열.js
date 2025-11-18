function solution(str_list, ex) {
    let answer = '';
    for(const str of str_list){
        if(!str.includes(ex)) answer += str;
    }
    return answer;
}