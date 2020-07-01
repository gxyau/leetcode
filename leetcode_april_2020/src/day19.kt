class SolutionDay19 {
    fun search(nums: IntArray, target: Int): Int {
        for (index in nums.indices) {
            if (target == nums[index]) return index
        }

        return -1
    }
}