class FirstUnique(nums: IntArray) {
    val map: LinkedHashMap<Int, Int> = LinkedHashMap()

    init {
        for (num in nums) {
            this.add(num)
        }
    }

    fun showFirstUnique(): Int {
        val filtered = map.filterValues { it -> it == 1 }
        if (filtered.isEmpty()) return -1
        return filtered.keys.first()
    }

    fun add(value: Int) {
        if (map.containsKey(value)) {
            map[value] = map[value]!! + 1
        } else {
            map.put(value, 1)
        }
    }

}

/**
 * Your FirstUnique object will be instantiated and called as such:
 * var obj = FirstUnique(nums)
 * var param_1 = obj.showFirstUnique()
 * obj.add(value)
 */