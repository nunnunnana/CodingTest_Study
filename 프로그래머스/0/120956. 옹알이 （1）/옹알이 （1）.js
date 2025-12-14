function solution(babbling) {
    let answer = 0;
    for(let s of babbling){
        if(s.includes("aya")){
            s = s.replace("aya", " ");
        }
        if(s.includes("ye")){
            s = s.replace("ye", " ");
        }
        if(s.includes("woo")){
            s = s.replace("woo", " ");
        }
        if(s.includes("ma")){
            s = s.replace("ma", " ");
        }
        if (!s.trim()) answer++;
    }
    return answer;
}