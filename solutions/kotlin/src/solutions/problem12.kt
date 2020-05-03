fun intToRomanDictionary(i: Int): String{
    var tmp = ""
    when(i){
        1    -> tmp = "I"
        5    -> tmp = "V"
        10   -> tmp = "X"
        50   -> tmp = "L"
        100  -> tmp = "C"
        500  -> tmp = "D"
        1000 -> tmp = "M"
    }
    return tmp
}

fun digitToRomanString(digit: Int, posn: Int): String{
    val currentUnit : String = intToRomanDictionary(i=1*posn)
    val currentFive : String = intToRomanDictionary(i=5*posn)
    val currentTenth: String = intToRomanDictionary(i=10*posn)
    var romanString : String = ""

    if (digit % 5 != 4) { // only remainder of 4 is special case
        romanString = currentFive.repeat(n = digit/5) + currentUnit.repeat(n = digit % 5) + romanString
    } else if (digit/5 == 0) {
        romanString = currentUnit + currentFive
    } else {
        romanString = currentUnit + currentTenth
    }

    return romanString
}

fun intToRoman(num: Int): String{
    // how do we prepend a string?
    var digits         : Int    = num // Remaining digit to be translated
    var position       : Int    = 1 // Position of the digit, increment by 10
    var romanString    : String = ""

    while( (digits / 10) + (digits % 10) > 0 ){
        romanString = digitToRomanString(digit = digits%10, posn = position) + romanString // Have to prepend
        position    *= 10
        digits      /= 10
    }

    println(romanString)

    return romanString
}

fun main(){
    intToRoman(num=123)
    intToRoman(num=240)
    intToRoman(num=500)
    intToRoman(num=1994)
}