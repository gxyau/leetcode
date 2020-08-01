class SolutionDay16 {
    fun checkValidString(s: String): Boolean {
        var upperbound: Int = 0
        var lowerbound: Int = 0

        for (i in s.indices) {
            // Increment corresponding counters
            lowerbound += if (s[i] == '(') 1 else -1
            upperbound += if (s[i] != ')') 1 else -1
            if (upperbound < 0) return false
            lowerbound = maxOf(lowerbound, 0)
        }

        return lowerbound == 0
    }
}