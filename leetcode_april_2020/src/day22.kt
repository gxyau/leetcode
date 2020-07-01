class SolutionDay22 {
    fun cumulativeList(nums: IntArray): List<Int> {
        val acc: MutableList<Int> = mutableListOf(0)

        for (i in nums.indices) {
            acc.add(acc[i] + nums[i])
        }

        return acc.toList()
    }

    fun subarraySum(nums: IntArray, k: Int): Int {
        var accumulator: List<Int> = cumulativeList(nums)
        var counter: Int           = 0

        for(i in accumulator.indices) {
            for (j in i+1 until accumulator.size) {
                counter += if(accumulator[j] - accumulator[i] == k) 1 else 0
            }
        }

        return counter
    }
}