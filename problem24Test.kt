import ListNode.*

fun main() {
    val linkedList                = ListNode(1)
    linkedList.next               = ListNode(2)
    linkedList.next!!.next        = ListNode(3)
    linkedList.next!!.next!!.next = ListNode(4)
    val swappedList               = swapPairs(linkedList)
    
    var nextNode: ListNode? = swappedList
    while (true) {
        println(nextNode!!.value)
        nextNode = nextNode.next
        if (nextNode == null) break
    }
}
