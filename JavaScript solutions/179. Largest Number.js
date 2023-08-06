/**
 * @param {number[]} nums
 * @return {string}
 */
var largestNumber = function (nums) {
  const customCompare = (a, b) => (a + b > b + a ? -1 : 1);

  const numsAsStrings = nums.map((num) => num.toString());
  numsAsStrings.sort(customCompare);

  if (numsAsStrings[0] === "0") {
    return "0";
  }

  return numsAsStrings.join("");
};
