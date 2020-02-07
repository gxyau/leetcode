/**
 * Example:
 * var li = ListNode(5)
 * var v = li.`val`
 * Definition for singly-linked list.
 * class ListNode(var `val`: Int) {
 *     var next: ListNode? = null
 * }
 */

class ListNode(var value: Int) {
    var next: ListNode? = null
}

fun listAggregator(l1: ListNode?, l2: ListNode?, newListHead: ListNode?, currentNode: ListNode? ) ListNode? {
    if (l1.value == null) { // l1 is empty, so just set successor to l2 head
        currentNode.next = l2
        return newListHead
    } else if (l2.value == null) { // l1 not empty but l2 empty, so set successor to l1
        currentNode.next = l1
        return newListHead
    } else { // Both l1, l2 are non-empty
        if (l1.value <= l2.value){
            currentNode.next = l1
            return listAggregator(l1.next, l2, newListHead, l1)
        } else { // l2.value > l1
            currentNode.next = l2
            return listAggregator(l1, l2.next, newListHead, l2)
        }
    }
}

fun mergeTwoLists(l1: ListNode?, l2: ListNode?): ListNode? {
    var sortedListNode: ListNode? = null
    if (l1.value == null) {
        sortedListNode = l2
    } else if (l2.value == null) {
        sortedListNode = l1
    } else {
        if ( l1!!.value <= l2!!.value ) { 
            sortedListNode = listAggregator(l1?.next, l2, l1, l1)
        } else { 
            sortedListNode = listAggregator(l1, l2?.next, l2, l2)
        }
    }

    return sortedListNode
}

fun main() {
    println("Hellllllooooooo")
    val test = mergeTwoLists(ListNode(2), ListNode(3))
    println(test)
}
