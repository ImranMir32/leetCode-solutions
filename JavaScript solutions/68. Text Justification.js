/**
 * @param {string[]} words
 * @param {number} maxWidth
 * @return {string[]}
 */
var fullJustify = function (words, maxWidth) {
  let ans = [];
  let cnt = 0;
  let currentLine = [];

  for (let i = 0; i < words.length; i++) {
    let s = words[i];
    let len = s.length;

    if (cnt + len + currentLine.length > maxWidth) {
      let spacesToAdd = maxWidth - cnt;
      if (currentLine.length === 1) {
        ans.push(currentLine[0] + " ".repeat(spacesToAdd));
      } else {
        let baseSpaces = Math.floor(spacesToAdd / (currentLine.length - 1));
        let extraSpaces = spacesToAdd % (currentLine.length - 1);

        let line = currentLine[0];
        for (let j = 1; j < currentLine.length; j++) {
          line += " ".repeat(baseSpaces);
          if (j <= extraSpaces) {
            line += " ";
          }
          line += currentLine[j];
        }
        ans.push(line);
      }
      currentLine = [];
      cnt = 0;
    }

    currentLine.push(s);
    cnt += len;
  }

  let lastLine = currentLine[0];
  for (let i = 1; i < currentLine.length; i++) {
    lastLine += " " + currentLine[i];
  }
  lastLine += " ".repeat(maxWidth - lastLine.length);
  ans.push(lastLine);

  return ans;
};
