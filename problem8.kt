import kotlin.math.pow

fun test(str: String) : Int{
    val pattern = Regex("^[\\+\\-]?[1-9]+")
    val match   = pattern.find(str.trim())?.value?.toLong()
    
    if ( (match != null) and (match > (2.0).pow(31)) and (match < (2.0).pow(31) -1) ) {
        return match.toInt()
    } else {
        return 0
    }
}


fun main() {
    test(str="    4193")
    test(str="+4")
    test(str="+h")
    test(str="    +4-2")
    test(str="4193 with words")
}
