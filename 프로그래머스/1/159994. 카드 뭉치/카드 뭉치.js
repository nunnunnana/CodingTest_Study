function solution(cards1, cards2, goal) {
    let idx1 = 0, idx2 = 0;
    for(let i = 0; i < goal.length; i++){
        if(cards1[idx1] == goal[i] && idx1 < cards1.length) idx1++;
        else if(cards2[idx2] == goal[i] && idx2 < cards2.length) idx2++;
        else return "No";
    }
    return "Yes";
}