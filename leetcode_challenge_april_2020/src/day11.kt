class TreeNode(var `val`: Int) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class SolutionDay11 {
    var diameter: Int = 0

    fun height(root: TreeNode?, currentLevel: Int): Int {
        if (root == null) return 0
        val L: Int = 1 + height(root.left, currentLevel)
        val R: Int = 1 + height(root.right, currentLevel)

        diameter = maxOf(diameter, L + R - 2)
        return maxOf(L,R)
    }

    fun diameterOfBinaryTree(root: TreeNode?): Int {
        height(root, 0)
        return diameter
    }
}