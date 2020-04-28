class FirstUnique(nums: IntArray) {
    val map: LinkedHashMap<Int, Boolean> = LinkedHashMap()

    init {
        for (num in nums) {
            this.add(num)
        }
    }

    fun showFirstUnique(): Int {
        if (map.values.first()) return map.keys.first()
        return -1
    }

    fun add(value: Int) {
        //map.put(value, map.getOrPut(value, {true}) and false)
        if (map.containsKey(value)) {
            map.remove(value)
            map.put(value, false)
        } else {
            map.put(value, true)
            while (true) {
                if (map.values.first()) break
                val currentFirst: Int = map.keys.first()
                map.remove(currentFirst)
                map.put(currentFirst, false)
            }
        }
    }

}

/**
 * Your FirstUnique object will be instantiated and called as such:
 * var obj = FirstUnique(nums)
 * var param_1 = obj.showFirstUnique()
 * obj.add(value)
 */