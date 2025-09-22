function solution(a, b, c, d) {
    let dice = Array.from({ length: 7 }, () => 0);
    dice[a]++, dice[b]++, dice[c]++, dice[d]++;
    
    let count = [];
    for(let i = 1; i <= 6; i++){
        if(dice[i] > 0) count.push(i);
    }
    
    if(count.length == 1) return 1111 * count[0];
    
    else if(count.length == 2){
        const p = count[0];
        const q = count[1];
        
        if(dice[p] == 3) return (10 * p + q) ** 2;
        if(dice[q] == 3) return (10 * q + p) ** 2;
        return (p + q) * Math.abs(p - q);
    }
    
    else if(count.length == 3){
        let result = 1;
        for(let i = 1; i <= 6; i++){
            if(dice[i] == 1) result *= i;
        }
        return result;
    }
    
    else return Math.min(...count);
}