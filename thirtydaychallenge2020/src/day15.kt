class SolutionDay15 {
    fun productExceptSelf(nums: IntArray): IntArray {
        var prods: IntArray = IntArray(nums.size)
        var mult: Int        = 1 // multiplier

        for (i in nums.indices) {
            prods[i] += nums.slice(i+1 until nums.size).fold(mult, { it, acc -> acc * it} )
            mult     *= nums[i]
        }

        return prods
    }
}