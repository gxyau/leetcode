import java.util.concurrent.atomic.AtomicInteger
import kotlin.collections.contains as contains1

fun test(str: String) : Int{
    var outputStr : String = "" // output
    var strTrimmed : String = str.trim()
    // Accepted symbols, i.e. numerals or signa
    val signa : ArrayList<Char> = arrayListOf('+','-')
    val numerals : ArrayList<Char> = arrayListOf('1','2','3','4','5','6','7','8','9','0')

    println(signa.toString().contains(" "))
    println(numerals.toString().contains(" "))
    /*
        TODO: Logic, first check if the first symbol is not one of the accepted ones,
        reject them. Otherwise it is one of them and we can just grab as much as we can.
    */
    if ( !((signa+numerals).toString().contains(strTrimmed[0])) ) {
        println("First non-white is not signa nor numerals")
        return 0
    } else if ( signa.toString().contains(strTrimmed[0]) && strTrimmed.length == 1 ) {
        println("Trimmed string has length 1 and is signa")
        return 0
    } else if (signa.toString().contains(strTrimmed[0]) and !(numerals.toString().contains(strTrimmed[1]))) {
        println("First non-whitespace is signa but second non-whitespace is not numeral")
        return 0
    } else {
        outputStr = strTrimmed[0].toString()

        var i = 1
        while( strTrimmed.length >= (i+1) && numerals.toString().contains(strTrimmed[i]) ){
            outputStr += strTrimmed[i]
            ++i
        }

        println(outputStr)

        return outputStr.toInt()
    }
}

fun main() {
    test(str="    4193")
    test(str="+4")
    test(str="+h")
    test(str="    +4-2")
    test(str="4193 with words")
}