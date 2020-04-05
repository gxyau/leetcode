class SolutionDay5 {
    fun maxProfit(prices: IntArray): Int {
        if (prices.size <= 1) return 0

        var profit: Int = 0

        for (i in 0 until prices.size - 1) {
            profit += maxOf(prices[i+1] - prices[i], 0)
        }

        return profit
    }
}