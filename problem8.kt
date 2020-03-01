import java.util.concurrent.atomic.AtomicInteger
import kotlin.collections.contains as contains1

fun test(str: String) : Int{
    val pattern = Regex("^[\\+\\-]?[1-9]+")
    val match   = pattern.find(str.trim())?.value
     
    return if (match == null) 0 else match.toInt()
}


fun main() {
    test(str="    4193")
    test(str="+4")
    test(str="+h")
    test(str="    +4-2")
    test(str="4193 with words")
}
