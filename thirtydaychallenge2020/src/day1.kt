class Solution {
    fun singleNumber(nums: IntArray): Int {
        val possibleNumbers: MutableList<Int> = mutableListOf<Int> ()

        for (num in nums) {
            if ( !(num in possibleNumbers) ) {
                possibleNumbers.add(num)
            } else {
                possibleNumbers.remove(num)
            }
        }

        return possibleNumbers[0]
    }
}