function solution(sizes) {
    let width = 0;
    let height = 0;

    for(const i of sizes){
        width = Math.max(width, Math.max(i[0], i[1]));
        height = Math.max(height, Math.min(i[0], i[1]));
    }
    return width * height;
}