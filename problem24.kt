import ListNode.*

fun swapPairs(head: ListNode?): ListNode? {
    // Pointer to keep track of previous node
    var pointer: ListNode?     = null
    // Current node we are processing
    var currentNode: ListNode? = head
    // head for the new list
    val newHead: ListNode
    
    if ((head == null) or (head?.next == null)) {
        // Less than equal to one node, return head
        return head
    } else {
        // Else set new head
        newHead = head!!.next!!
    }
     
    while (true) {
        // Do the magic
        // First check which pair we are on
        val node1: ListNode    = currentNode!!.next!!
        val node2: ListNode    = currentNode!!
        // Swapping the two nodes
        node2.next   = node1.next
        node1.next   = node2
        if (pointer != null) {
            pointer.next = node1
        }
        // Updating
        pointer      = node2
        currentNode  = node2.next
        // Breaking conditions
        if ((currentNode == null) or (currentNode?.next == null)) break
    }
    return newHead
}
