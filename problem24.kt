import ListNode.*

fun swapPairs(head: ListNode?): ListNode? {
    // Initialization of variables
    var currentNode: ListNode? = head

    if ( (currentNode == null) or (currentNode.next == null) ) {
        /*
            There is only zero or one node. No swapping required.
        */
        return head
    } else { // There are at least two nodes, good
        val newHead: ListNode      = currentNode.next

        while (true) {
            // Initializing variables
            val node1: ListNode?   = currentNode
            val node2: ListNode?   = currentNode.next
            val nextNode           = currentNode.next?.next
            
            // Magic, the swapping part
            node1.next = nextNode
            node2.next = node1

            // Updating the variables
            currentNode = nextNode

            // Break loop condition
            if ( (currentNode == null) or (currentNode.next == null) ) break
        }

        return newHead
    }

}
