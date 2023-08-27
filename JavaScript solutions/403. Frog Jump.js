/**
 * @param {number[]} stones
 * @return {boolean}
 */
var canCross = function (stones) {
  const hashMap = new Map();

  for (const stone of stones) {
    hashMap.set(stone, new Set());
  }

  hashMap.get(0).add(0);

  for (let i = 0; i < stones.length; ++i) {
    const currentPosition = stones[i];

    for (const jumpSize of hashMap.get(currentPosition)) {
      const nextPosition = currentPosition + jumpSize;

      if (nextPosition === stones[stones.length - 1]) {
        return true;
      }

      if (hashMap.has(nextPosition)) {
        if (jumpSize > 0) {
          hashMap.get(nextPosition).add(jumpSize - 1);
        }
        hashMap.get(nextPosition).add(jumpSize);
        hashMap.get(nextPosition).add(jumpSize + 1);
      }
    }
  }

  return false;
};
