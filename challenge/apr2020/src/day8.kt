class ListNode(var `val`: Int) {
    var next: ListNode? = null
}

class Solution {
    fun middleNode(head: ListNode?): ListNode? {
        var slow: ListNode  = head!!
        var fast: ListNode? = head
        var parity: Int     = 1

        while (true) {
            if (fast == null) break
            fast = fast.next
            if (parity == 1) slow = slow.next!!
            parity  = (parity + 1) % 2
        }

        return slow
    }
}