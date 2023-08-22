/**
 * @param {number} columnNumber
 * @return {string}
 */
var convertToTitle = function (columnNumber) {
  if (columnNumber < 27) {
    return String.fromCharCode("A".charCodeAt(0) + ((columnNumber - 1) % 26));
  }

  let ans = "";
  while (columnNumber > 0) {
    if (columnNumber % 26 === 0) {
      ans += String.fromCharCode("A".charCodeAt(0) + 25);
      columnNumber -= 1;
    } else {
      ans += String.fromCharCode("A".charCodeAt(0) + (columnNumber % 26) - 1);
    }
    columnNumber = Math.floor(columnNumber / 26);
  }

  return ans.split("").reverse().join("");
};
