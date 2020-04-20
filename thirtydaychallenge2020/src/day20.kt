
 class TreeNode(var `val`: Int) {
     var left: TreeNode? = null
     var right: TreeNode? = null
 }

class SolutionDay20 {
    tailrec fun buildBST(head: TreeNode, value: Int): Unit {
        if (value > head.`val`) {
            if(head.right == null) {
                head.right = TreeNode(value)
            } else {
                buildBST(head.right!!, value)
            }
        } else {
            if(head.left == null)  {
                head.left  = TreeNode(value)
            } else {
                buildBST(head.left!!, value)
            }
        }
    }

    fun bstFromPreorder(preorder: IntArray): TreeNode? {
        if (preorder.isEmpty()) return null
        val tmp: TreeNode = TreeNode(Int.MIN_VALUE)

        for (value in preorder) {
            buildBST(tmp, value)
        }

        return tmp.right
    }
}