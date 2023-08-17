/**
 * @param {number[][]} mat
 * @return {number[][]}
 */
var updateMatrix = function (mat) {
  const n = mat.length;
  const m = mat[0].length;
  const vis = new Array(n).fill().map(() => new Array(m).fill(0));
  const dist = new Array(n).fill().map(() => new Array(m).fill(0));
  const q = [];

  const delrow = [-1, 0, +1, 0];
  const delcol = [0, +1, 0, -1];

  for (let i = 0; i < n; i++) {
    for (let j = 0; j < m; j++) {
      if (mat[i][j] === 0) {
        q.push([[i, j], 0]);
        vis[i][j] = 1;
      }
    }
  }

  while (q.length > 0) {
    const [current, steps] = q.shift();
    const row = current[0];
    const col = current[1];
    dist[row][col] = steps;

    for (let i = 0; i < 4; i++) {
      const nrow = row + delrow[i];
      const ncol = col + delcol[i];

      if (
        nrow >= 0 &&
        nrow < n &&
        ncol >= 0 &&
        ncol < m &&
        vis[nrow][ncol] === 0
      ) {
        vis[nrow][ncol] = 1;
        q.push([[nrow, ncol], steps + 1]);
      }
    }
  }

  return dist;
};
