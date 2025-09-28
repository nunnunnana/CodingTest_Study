function solution(my_string, is_suffix) {
    let answer = [];
    for(let i = 0; i < my_string.length; i++){
        answer.push(my_string.slice(i, my_string.length))
    }
    for(const str of answer){
        if(str == is_suffix) return 1
    }
    return 0;
}