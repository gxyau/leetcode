class SolutionDay26 {
    fun longestCommonSubsequence(text1: String, text2: String): Int {
        val m: Int = text1.length; val n: Int = text2.length
        val accumulator: Array<IntArray> = Array(m+1, {IntArray(n+1)})

        for (i in 1..m) {
            for (j in 1..n) {
                accumulator[i][j] = if (text1[i-1] == text2[j-1]) 1 + accumulator[i-1][j-1]
                else maxOf(accumulator[i-1][j], accumulator[i][j-1])
            }
        }

        return accumulator[m][n]
    }
}