function solution(my_string, indices) {
    let answer = ''
    let idx = 0
    indices.sort((a, b) => a - b)
    for(let i = 0; i < my_string.length; i++){
        if(indices.length > idx){
            if(indices[idx] == i){
                idx++
                continue
            }
        }
        answer += my_string[i]
    }
    return answer
}