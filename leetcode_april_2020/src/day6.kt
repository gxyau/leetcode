class SolutionDay6 {
    fun groupAnagrams(strs: Array<String>): List<List<String>> {
        val anagrams: MutableMap<String, MutableList<String> > = mutableMapOf()

        for (i in strs.indices) {
            val value: String = strs[i]
            val key: String   = value.toCharArray().sortedArray().contentToString()
            if (anagrams.containsKey(key)) {
                anagrams[key]!! += listOf(value)
            } else {
                anagrams[key] = mutableListOf(value)
            }
        }

        return anagrams.values.toList()
    }
}