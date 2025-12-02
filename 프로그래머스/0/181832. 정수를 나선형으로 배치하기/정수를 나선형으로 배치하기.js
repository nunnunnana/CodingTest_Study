function solution(n) {
    let answer = Array(n).fill(0).map(() => Array(n).fill(0));
    
    const dx = [0, 1, 0, -1];
    const dy = [1, 0, -1, 0];
    
    let x = 0, y = 0;
    let dir = 0;
    let num = 1;
    
    for (let i = 0; i < n * n; i++) {
        answer[x][y] = num++;

        let nx = x + dx[dir];
        let ny = y + dy[dir];

        if (nx < 0 || ny < 0 || nx >= n || ny >= n || answer[nx][ny] != 0) {
            dir = (dir + 1) % 4;
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;
    }
    return answer;
}