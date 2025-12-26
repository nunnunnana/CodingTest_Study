function solution(x) {
    let answer = x;
    let sum = 0;

    while(x != 0){
        sum += Math.floor(x % 10);
        x = Math.floor(x / 10);
    }
    
    if(answer % sum == 0) return true;
    else return false;
}