/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function (s) {
  const words = s.split(" ");
  const reversedWords = words.filter((word) => word !== "").reverse();
  return reversedWords.join(" ");
};
