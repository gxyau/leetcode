class SolutionDay21 {
    fun leftMostColumnWithOne(binaryMatrix:BinaryMatrix):Int {
        val m: Int    = binaryMatrix.dimensions()[0]
        val n: Int    = binaryMatrix.dimensions()[1]
        var i: Int    = 0
        var j: Int    = n-1
        var seen: Int = 0
        var posn: Int = Int.MAX_VALUE

        while (true) {
            val current: Int = binaryMatrix.get(i,j)
            seen += current

            if (current == 1) {
                posn = minOf(posn, j)
                if (j == 0) break
                j = maxOf(0, j-1)
            } else {
                if (i == m-1 && current == 0) break
                i = minOf(m-1, i+1)
                j = minOf(n-1, j+1)
            }
        }

        return if(seen > 0) posn else -1
    }
}
