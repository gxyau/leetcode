class SolutionDay13 {
    fun findMaxLength(nums: IntArray): Int {
        // We add one if the element is 1 and minus one if element is 0
        val counterIndexPair: MutableMap<Int, Int> = mutableMapOf(Pair(0,0))
        var counter: Int                         = 0
        var maxLength: Int                       = 0

        for (i in nums.indices) {
            // Adding entry to cumulativeSums
            counter         += 2*nums[i]-1
            if ( counterIndexPair.containsKey(counter) ) {
                maxLength = maxOf(maxLength, (i+1) - counterIndexPair.get(counter)!!)
            } else {
                counterIndexPair.put(counter, i+1)
            }
        }

        return maxLength
    }
}