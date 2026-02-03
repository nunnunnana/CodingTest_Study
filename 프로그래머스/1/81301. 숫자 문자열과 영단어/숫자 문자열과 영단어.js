function solution(s) {
       const strArr = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"];
        for(let i = 0; i < strArr.length; i++) {
            s = s.replaceAll(strArr[i], i.toString());
        }
        return Number(s);
}