import ListNode.*
import kotlin.math.*

fun mergeTwoLists(l1: ListNode?, l2: ListNode?): ListNode? {
    var head: ListNode?
    var currentNode: ListNode?
    var l1Rest: ListNode?
    var l2Rest: ListNode?
    if (l1 == null) {
        return l2
    } else if (l2 == null) {
        return l1
    } else {
        // Different initial condition has different initialization
        if (l1.value <= l2.value) {
            head        = l1
            currentNode = l1
            l1Rest      = l1.next
            l2Rest      = l2
        } else {
            head        = l2
            currentNode = l2
            l1Rest      = l1
            l2Rest      = l2.next
        }
        
        while (true) {
            if (l1Rest == null) {
                currentNode!!.next = l2Rest
                break
            } else if (l2Rest == null){
                currentNode!!.next = l1Rest
                break
            } else if (l1Rest.value <= l2Rest.value) {
                currentNode!!.next = l1Rest
                l1Rest             = l1Rest.next
            } else {
                currentNode!!.next = l2Rest
                l2Rest             = l2Rest.next
            }
            
            currentNode = currentNode.next
        }
        
        return head
    }
}
