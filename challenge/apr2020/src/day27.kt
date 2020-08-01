class SolutionDay27 {
    fun maximalSquare(matrix: Array<CharArray>): Int {
        if (matrix.isEmpty()) return 0
        val m: Int = matrix.size
        val n: Int = matrix[0].size
        val dp: IntArray = IntArray(n + 1)
        var maxLength: Int = 0
        var old: Int = 0

        for (i in 0 until m) {
            for (j in 1..n) {
                val temp = dp[j]
                if (matrix[i][j - 1] == '1') {
                    dp[j] = minOf(old, dp[j - 1], dp[j]) + 1
                    maxLength = maxOf(maxLength, dp[j])
                } else {
                    dp[j] = 0
                }
                old = temp
            }
        }


        return maxLength * maxLength
    }
}