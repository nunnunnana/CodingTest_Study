function solution(myString, pat) {
    let cnt = 0;
    for(let i in myString){
        if(myString.substring(i).startsWith(pat)) cnt++;
    }
    return cnt;
}