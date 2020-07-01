/*
    Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.

    String.format("%16s", Integer.toBinaryString(1)).replace(' ', '0')
*/

class SolutionDay23 {
    fun rangeBitwiseAnd(m: Int, n: Int): Int {
        var lower = m
        var upper = n
        var count = 0

        while (true) {
            if (lower == upper) break
            lower = lower shr 1
            upper = upper shr 1
            count++
        }

        return upper shl count
    }
}