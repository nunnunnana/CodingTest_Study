function solution(s) {
    let answer = "";
    let idx = 0;
    
    for(const c of s){
        if(c == ' '){
            answer += " ";
            idx = 0;
        } else {
            answer += idx % 2 == 0 ? c.toUpperCase() : c.toLowerCase();
            idx++;
        }
    }
    return answer;
}