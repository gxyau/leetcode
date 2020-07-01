class MinStack() {
    /**
     * initialize your data structure here.
     * first is top stack, second is cumulative min
     **/
    val stack: MutableList< Pair<Int, Int> > = mutableListOf< Pair<Int, Int> > ()

    fun push(x: Int) {
        if(stack.isEmpty()) {
            stack.add( Pair<Int, Int>(x, x) )
        } else {
            stack.add( Pair<Int, Int>(x, minOf(stack.last().second, x)) )
        }
    }

    fun pop() = stack.removeAt(stack.lastIndex)

    fun top(): Int = stack.last().first

    fun getMin(): Int = stack.last().second

}

/**
 * Your MinStack object will be instantiated and called as such:
 * var obj = MinStack()
 * obj.push(x)
 * obj.pop()
 * var param_3 = obj.top()
 * var param_4 = obj.getMin()
 */