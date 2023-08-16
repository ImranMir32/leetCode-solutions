/**
 * @param {string} s
 * @return {number}
 */
var minAddToMakeValid = function (s) {
  let sto = [];
  let stc = [];

  for (let i = 0; i < s.length; i++) {
    if (s[i] === "(") {
      sto.push(s[i]);
    } else {
      if (sto.length !== 0) {
        sto.pop();
      } else {
        stc.push(s[i]);
      }
    }
  }

  return sto.length + stc.length;
};
