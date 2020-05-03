import kotlin.math.pow

fun test(str: String) : Int{
    val pattern = Regex("^[\\+\\-]?[1-9]+")
    val match   = pattern.find(str.trim())?.value?.toLong()
    
    if ( (match == null) ){
        return 0
    } else if ( (match < -(2.0).pow(31)) or (match > (2.0).pow(31) -1) ) {
        return 0
    } else {
        return match.toInt()
    }
}


fun main() {
    test(str="    4193")
    test(str="+4")
    test(str="+h")
    test(str="    +4-2")
    test(str="4193 with words")
}
