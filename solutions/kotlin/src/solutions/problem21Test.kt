import ListNode.*

fun main() {
    val l1                  = ListNode(1)
    var pointer1: ListNode? = l1
    val l2                  = ListNode(2)
    var pointer2: ListNode? = l2
    
    pointer1!!.next   = ListNode(3)
    pointer1          = pointer1.next
    pointer1!!.next   = ListNode(4)

    pointer2!!.next   = ListNode(5)
    pointer2          = pointer2.next
    pointer2!!.next   = ListNode(6)

    val sortedList         = mergeTwoLists(l1, l2)
    var pointer: ListNode? = sortedList
    
    while (true) {
        println(pointer?.value)
        pointer = pointer?.next
        if (pointer == null) break
    }
}
