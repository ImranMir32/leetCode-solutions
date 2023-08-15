var letterCombinations = function (digits) {
  const v = ["abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"];
  const ans = [];

  if (digits.length === 0) return ans;

  function generateCombinations(index, current) {
    if (index === digits.length) {
      ans.push(current);
      return;
    }

    const digit = parseInt(digits[index]);
    const letters = v[digit - 2];

    for (let i = 0; i < letters.length; i++) {
      generateCombinations(index + 1, current + letters[i]);
    }
  }

  generateCombinations(0, "");

  return ans;
};
