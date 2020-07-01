class Solution {
    tailrec fun findMax(nums: IntArray, maximum: Int, cumulativeSum: Int): Int {
        if ( nums.isEmpty() )  return maximum // Base case

        val currentSum: Int  = cumulativeSum + nums[0]
        val currentMax: Int  = maxOf(maximum, currentSum)
        val restart: Boolean = currentSum < 0

        if(restart) return findMax(nums.drop(1).toIntArray(), currentMax, 0)

        return findMax(nums.drop(1).toIntArray(), currentMax, currentSum)
    }

    fun maxSubArray(nums: IntArray): Int {
        return findMax(nums, -2147483648, 0)
    }
}