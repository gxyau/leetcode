fun longestCommonPrefix(strs: Array<String>): String {
    // Setting up
    var commonPrefix: String   = ""
    var index: Int             = 0

    if ( (strs.isEmpty()) or // Check for empty array
            (strs.any {it -> it.isEmpty() }) ) { // Check any elements is empty string
        return commonPrefix
    }
    // Get minimum length
    val minimumLength: Int = strs.map( {it -> it.length} ).min()!!

    while (true) {
        // Breaking condition 1
        if (index >= minimumLength) break
        // Initialize for loop
        val characters: CharArray  = strs.map({it -> it[index]}).toCharArray()
        val currentCharacter: Char = strs[0][index]
        // Breaking condition 2
        if (characters.any {it -> it != currentCharacter}) break
        // Update values
        commonPrefix += currentCharacter
        index++
    }

    return commonPrefix
}

fun main() {
    println(longestCommonPrefix(arrayOf("flower","flow","flight")))
    println(longestCommonPrefix(emptyArray()))
    println(longestCommonPrefix(arrayOf("")))
    println(longestCommonPrefix(arrayOf("a")))
}
