class SolutionDay30 {
    fun isValidSequence(root: TreeNode?, arr: IntArray): Boolean {
        if(root != null && arr.isNotEmpty()) {
            val value: Int          = root.`val`
            val bit: Int            = arr[0]
            val remaining: IntArray = arr.slice(1 until arr.size).toIntArray()
            // Current value in binary tree and current bit are different
            when {
                bit != value -> {
                    return false
                }
                root.left == null -> {
                    return isValidSequence(root.right, remaining)
                }
                root.right == null -> {
                    return isValidSequence(root.left, remaining)
                }
                else -> {
                    return isValidSequence(root.left, remaining) || isValidSequence(root.right, remaining)
                }
            }

        } else if (root == null) {
            if (arr.isNotEmpty()) return false
        } else if (arr.isEmpty()) {
            return false
        }

        return true
    }
}