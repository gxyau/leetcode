class SolutionDay7 {
    fun countElements(arr: IntArray): Int {
        var counter: Int                 = 0
        val elementsCount: Map<Int, List<Int> > = arr.groupBy {it}

        for (key in elementsCount.keys) {
            if (elementsCount.containsKey(key + 1))  counter += elementsCount[key]!!.size
        }

        return counter
    }
}