fun maxArea(height: IntArray): Int{
    val totalElements: Int = height.size
    var maxArea: Int       = 0

    for(i  in 0 until totalElements - 2){
        for(j in i until totalElements - 1) {
            println(listOf(maxArea, (j - i)*minOf(height[i], height[j])))
            maxArea = maxOf(maxArea, (j - i)*minOf(height[i], height[j]) )
        }
    }

    return maxArea
}

fun main() {
    println(maxArea(intArrayOf(0,0)))
    println(maxArea(intArrayOf(1,2,3,4,5,6,7)))
    println(maxArea(intArrayOf(7,7,7,7,7)))
    println(maxArea(intArrayOf(1,2,0,1,3)))
    println(maxArea(intArrayOf(2,2)))
    println(maxArea(intArrayOf(7,6,5,4,3,2,1)))
}