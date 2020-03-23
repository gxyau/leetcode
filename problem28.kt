fun strStr(haystack: String, needle: String): Int {
    return haystack.indexOf(needle)
}

fun main() {
    println( strStr("", "") )
    println( strStr("aaaaaaaaaaaaaa", "aa") )
    println( strStr("aabbcc", "bc") )
    println( strStr("a", "aa") )
    println( strStr("aabbcc", "cb") )
}