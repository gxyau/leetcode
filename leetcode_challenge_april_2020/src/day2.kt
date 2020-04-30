class SolutionDay2 {
    fun squaredSum(n: Int): Int {
        var total: Int           = 0
        var remainingDigits: Int = n

        while (true) {
            val currentDigit: Int = remainingDigits % 10
            total += currentDigit * currentDigit
            remainingDigits     /= 10
            if ( remainingDigits/10 + remainingDigits%10 == 0 ) break
        }

        return total
    }

    tailrec fun checkHappiness(n: Int, numbersAlreadySeen: MutableList<Int>): Boolean {
        if (numbersAlreadySeen.contains(n)) {
            return false
        } else if (n == 1) {
            return true
        }

        val nextValue: Int = squaredSum(n)
        numbersAlreadySeen.add(n)

        return checkHappiness(nextValue, numbersAlreadySeen)
    }

    fun isHappy(n: Int): Boolean {
        return checkHappiness(n, mutableListOf<Int>())
    }
}