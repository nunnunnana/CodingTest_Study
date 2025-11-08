function solution(rank, attendance) {
    const pos = Array(rank.length);
    for(let i = 0; i < rank.length; i++) pos[rank[i]] = i;

    const picked = [];
    for (let r = 1; r <= rank.length && picked.length < 3; r++) {
      const i = pos[r];
      if (attendance[i]) picked.push(i);
    }
    const [a, b, c] = picked;
    return 10000 * a + 100 * b + c;
    
}