class SolutionDay12 {
    fun lastStoneWeight(stones: IntArray): Int {
        val sList: MutableList<Int> = stones.toMutableList()
        for (i in 0 until sList.lastIndex) {
            sList.sort()
            val max = sList.removeAt(sList.lastIndex)
            val sMax = sList.removeAt(sList.lastIndex)
            println("Max: $max, sMax: $sMax, will add ${max - sMax}")
            sList.add(max - sMax)
        }

        return sList[0]
    }
}

class AlternativeSolution {
    class Heap {
        private val items: MutableList<Int> = mutableListOf()
        var size = 0
            private set
        init {
            // useless header element
            items.add(0)
        }
        fun push(x: Int) {
            size += 1
            items.add(x)
            var pos = size
            while (pos > 1 && items[pos] > items[parent(pos)]) {
                swap(pos, parent(pos))
                pos /= 2
            }
        }

        fun pop(): Int {
            val result = items[1]
            swap(1, size)
            items.removeAt(items.lastIndex)
            size -= 1
            var pos = 1
            while (true) {
                val left = leftChild(pos)
                val right = rightChild(pos)
                if (left > size) break
                val bestSon = if (right > size || items[left] > items[right]) { left }
                else { right }
                if (items[pos] >= items[bestSon]) break
                swap(pos, bestSon)
                pos = bestSon
            }
            return result
        }

        private fun swap(i: Int, j: Int) {
            val t = items[i]
            items[i] = items[j]
            items[j] = t
        }

        private fun leftChild(i: Int) = i * 2
        private fun rightChild(i: Int) = i * 2 + 1
        private fun parent(i: Int) = i / 2
    }

    fun lastStoneWeight(stones: IntArray): Int {
        val heap = Heap()
        stones.forEach{ heap.push(it) }
        while (heap.size > 1) {
            val newStone = heap.pop() - heap.pop()
            if (newStone > 0) {
                heap.push(newStone)
            }
        }
        return if (heap.size > 0) { heap.pop() } else { 0 }
    }
}