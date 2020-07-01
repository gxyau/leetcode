class SolutionDay14 {
    fun stringShift(s: String, shift: Array<IntArray>): String {
        val n: Int = s.length
        // Get final shifting direction and steps
        var totalShifts: Int = 0
        for (sh in shift) {
            totalShifts = Math.floorMod(totalShifts + (2 * sh[0] - 1) * sh[1], n)
        }

        return s.substring(n-totalShifts, n) + s.substring(0,n-totalShifts)
    }
}