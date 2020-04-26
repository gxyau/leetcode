fun romanToIntDictionary(c: Char): Int{
    var tmp = 0
    when(c.toUpperCase()){
        'I' -> tmp = 1
        'V' -> tmp = 5
        'X' -> tmp = 10
        'L' -> tmp = 50
        'C' -> tmp = 100
        'D' -> tmp = 500
        'M' -> tmp = 1000
        else -> error(message="Roman numerals does not contain $c")
    }
    return tmp
}

fun decode(acc: IntArray, raw: IntArray): IntArray{
    var accTmp: IntArray = acc
    if (raw.isEmpty()) {
        return acc
    } else if (raw.size == 1){
        accTmp += raw.first()
        return decode(acc = accTmp, raw = IntArray(size=0))
    } else if (raw[0] >= raw[1]) {
        accTmp += raw.first()
        return decode(acc = accTmp, raw = raw.sliceArray(indices=1..raw.lastIndex))
    } else {
        accTmp += raw[1] - raw[0]
        return decode(acc = accTmp, raw = raw.sliceArray(indices=2..raw.lastIndex))
    }
}

fun romanToInt(s: String): Int{
    var values: IntArray = (s.map<Int> {romanToIntDictionary(it)}).toIntArray()

    println(decode(acc =IntArray(size=0), raw =values).sum())

    return decode(acc =IntArray(size=0), raw =values).sum()
}

fun main(){
    romanToInt(s="III")
    romanToInt(s="IV")
    romanToInt(s="XLIV")

    //decode(listOf(1,2,3,1,3))
}
