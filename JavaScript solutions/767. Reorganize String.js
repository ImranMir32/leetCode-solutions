/**
 * @param {string} s
 * @return {string}
 */
var reorganizeString = function (s) {
  const charCount = new Map();

  for (const char of s) {
    charCount.set(char, (charCount.get(char) || 0) + 1);
  }

  const charFrequencyPairs = Array.from(charCount.entries()).sort(
    (a, b) => b[1] - a[1]
  );

  const maxFrequency = charFrequencyPairs[0][1];
  if (maxFrequency > Math.floor((s.length + 1) / 2)) {
    return "";
  }

  let result = new Array(s.length);
  let index = 0;
  for (const [char, frequency] of charFrequencyPairs) {
    for (let i = 0; i < frequency; i++) {
      if (index >= s.length) {
        index = 1;
      }
      result[index] = char;
      index += 2;
    }
  }
  return result.join("");
};
