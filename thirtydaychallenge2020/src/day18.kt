class SolutionDay18 {
    fun minPathSum(grid: Array<IntArray>): Int {
        if (grid.isEmpty()) return 0

        val m: Int = grid.size; val n: Int = grid[0].size

        for (i in 0 until m) {
            for (j in 0 until n) {
                if (i == 0 && j == 0) {
                    continue
                } else if (i == 0) {
                    grid[0][j] += grid[0][j-1]
                } else if(j == 0) {
                    grid[i][0] += grid[i-1][0]
                } else {
                    grid[i][j] += minOf(grid[i-1][j], grid[i][j-1])
                }
            }
        }

        return grid[m-1][n-1]
    }
}