function solution(s){
    s = s.toLowerCase();
    let countP = 0;
    let countY = 0;
        
    for (const c of s) {
        if (c == 'p') countP++;
        if (c == 'y') countY++;
    }

    return countP == countY ? true : false;
}