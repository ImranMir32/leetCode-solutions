/**
 * @param {string} s
 * @return {string}
 */
var sortVowels = function (s) {
  const vowels = [];
  for (let i = 0; i < s.length; i++) {
    if (
      s[i] === "A" ||
      s[i] === "E" ||
      s[i] === "I" ||
      s[i] === "O" ||
      s[i] === "U"
    ) {
      vowels.push(s[i]);
    } else if (
      s[i] === "a" ||
      s[i] === "e" ||
      s[i] === "i" ||
      s[i] === "o" ||
      s[i] === "u"
    ) {
      vowels.push(s[i]);
    }
  }
  vowels.sort();

  let ind = 0;
  const sArray = s.split("");
  for (let i = 0; i < sArray.length; i++) {
    if (
      sArray[i] === "A" ||
      sArray[i] === "E" ||
      sArray[i] === "I" ||
      sArray[i] === "O" ||
      sArray[i] === "U"
    )
      sArray[i] = vowels[ind++];
    else if (
      sArray[i] === "a" ||
      sArray[i] === "e" ||
      sArray[i] === "i" ||
      sArray[i] === "o" ||
      sArray[i] === "u"
    )
      sArray[i] = vowels[ind++];
  }

  return sArray.join("");
};
