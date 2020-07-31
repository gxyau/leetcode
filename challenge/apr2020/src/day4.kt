class SolutionDay4 {
    fun moveZeroes(nums: IntArray): Unit {
        var count: Int = 0

        for (i in 0 until nums.size) {
            if (nums[i] != 0) {
                nums[count++] = nums[i]
            }
        }

        while(count < nums.size) {
            nums[count++] = 0
        }
    }
}