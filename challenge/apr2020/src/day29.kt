/**
 * Example:
 * var ti = TreeNode(5)
 * var v = ti.`val`
 * Definition for a binary tree node.
 * class TreeNode(var `val`: Int) {
 *     var left: TreeNode? = null
 *     var right: TreeNode? = null
 * }
 */
class SolutionDay29 {
    private var sum: Int = Int.MIN_VALUE

    tailrec fun computeSum(root: TreeNode?): Int {
        if (root == null) return 0

        val L: Int   = root.`val` + computeSum(root.left)
        val R: Int   = root.`val` + computeSum(root.right)
        val M: Int   = root.`val`
        val max: Int = maxOf(L,M,R)

        sum = maxOf(sum, max, L+R-M)

        return max
    }

    fun maxPathSum(root: TreeNode?): Int {
        if (root == null) return 0
        computeSum(root)
        return sum
    }
}