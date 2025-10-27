function solution(myStr) {
      const trimmed = myStr.replace(/[abc]/g, " ").trim();
      if (trimmed.length === 0) return ["EMPTY"];
      return trimmed.split(/\s+/);
}