function solution(my_string, queries) {
    let arr = my_string.split('');
    for(let i of queries){
        let s = i[0]
        let e = i[1]
        while(s < e){
            let temp = arr[s];
            arr[s++] = arr[e];
            arr[e--] = temp;
        }
    }
    return arr.join(''); 
}