class LRUCache(capacity: Int) {
    private val capacity = capacity
    val map: MutableMap<Int, Int> = LinkedHashMap()

    fun get(key: Int): Int {
        val v = map.getOrDefault(key, -1)
        if (v != -1) {
            map.remove(key)
            map[key] = v
        }
        return v
    }

    fun put(key: Int, value: Int) {
        if (map.containsKey(key)) {
            map.remove(key)
            map[key] = value
        } else if (map.size == capacity) {
            val firstKey = map.keys.first()
            map.remove(firstKey)
        }
        map[key] = value
    }
}