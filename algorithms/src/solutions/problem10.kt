fun isMatch(s: String, p: String): Boolean {
    val pattern = Regex(pattern=p)

    println(pattern.matchEntire(s) != null)

    /*
    var allMatches = pattern.findAll(s)
    var matchedStrings = allMatches.map(){ it.value }.toList()//{ it.groupValues[0] }

    println(matchedStrings)

    println(pattern.find(s)?.groups?.get(0)?.value)
    println(pattern.matchEntire(s)?.value)
     */

    return pattern.matchEntire(s) != null
}

fun main() {
    isMatch(s="aa",p="a")
    isMatch(s="aa",p="a*")
    isMatch(s="ab",p=".*")
    isMatch(s="aab",p="c*a*b")
    isMatch(s="mississippi",p="mis*is*p*.")
}