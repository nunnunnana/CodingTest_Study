function solution(myString, pat) {
    let swapped = myString
      .split("")                    
      .map(ch => (ch === "A" ? "B" : ch === "B" ? "A" : ch))
      .join("");
    
    return swapped.includes(pat) ? 1 : 0;
}