function solution(code) {
    let ret = '';
    let mode = 0;
    for(let i = 0; i < code.length; i++){
        if(code[i] == '1'){
            mode = !mode;
            continue;
        }
        if(i % 2 == mode){
            ret += code[i];
        }
    }
    return ret.length == 0 ? "EMPTY" : ret;
}