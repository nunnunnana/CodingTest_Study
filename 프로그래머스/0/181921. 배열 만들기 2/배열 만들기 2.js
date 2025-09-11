function solution(l, r) {
        let result = [];
        
        for(let i = 1; i < 64; i++){
            let num = parseInt(i).toString(2) * 5;
            if(num >= l && num <= r){
                result.push(num);
            }
        }
        
        return result.length == 0 ? [-1] : result;
}