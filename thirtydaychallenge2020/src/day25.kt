class SolutionDay25 {
    fun canJump(nums: IntArray): Boolean {
        val n: Int                  = nums.size
        val reachable: BooleanArray = BooleanArray(n)

        // Last cell always hold true, but we will reverse the order of the array
        reachable[n-1] = true

        for (i in n-2 downTo 0) {
            val lastIndex: Int             = minOf(i+nums[i],n-1)
            val currentRange: BooleanArray = reachable.slice(i..lastIndex).toBooleanArray()
            reachable[i] = currentRange.any {it -> it }
        }

        return reachable[0]
    }
}