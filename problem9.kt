fun intToList(x: Int): MutableList<Int> {
    val mList: MutableList<Int> = mutableListOf<Int>()
    var integer = x

    while (integer % 10  + integer / 10 != 0) {
        mList.add(integer % 10)
        integer /= 10
    }

    return mList
}

fun isPalindromicList(palindromeList: MutableList<Int>): Boolean {
    // Declare variable
    var isPalindromic: Boolean = true
    println(palindromeList)
    println(isPalindromic)
    while (true) {
        if (palindromeList.size <= 1) break // if list has length at most 1, it is true
        val first: Int = palindromeList[0]
        val last: Int  = palindromeList[palindromeList.size - 1]
        isPalindromic  = isPalindromic and (first == last)
    }

    return isPalindromic
}



fun isPalindrome(x: Int): Boolean {
    // Negative numbers always returns false
    if (x < 0) {return false}

    // Turn integer to list of digits
    val digitList: MutableList<Int> = intToList(x)

    return isPalindromicList(digitList)
}

fun main(){
    println(isPalindrome(-111))
    println(isPalindrome(-1))
    println(isPalindrome(0))
    println(isPalindrome(111))
    println(isPalindrome(3))
    println(isPalindrome(1234))
    println(isPalindrome(1001))
}