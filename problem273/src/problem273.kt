fun intToEnglishDictionary(num: Int): String {
    var str: String = ""
    when(num){
        1 -> str = "One"
    }
    return str
}

fun numberToWords(num: Int): String {
    var remaining     : Int = num
    var posn          : Int = 1 // will increment by 10
    var numberInWords : String = ""

    while ( (remaining /10) + (remaining % 10) > 0 ) {
        posn *= 10
        remaining /= 10
    }

    return numberInWords
}

fun main(){
    println("Привет")
}