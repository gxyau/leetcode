class SolutionDay9 {
    fun removeBackspace(string: String): String {
        var newString: String = ""
        for (i in string.indices) {
            if (string[i] != '#') {
                newString += string[i]
            } else if (newString != "") {
                newString = newString.dropLast(1)
            }
        }
        return newString
    }

    fun backspaceCompare(S: String, T: String): Boolean {
        return removeBackspace(S) == removeBackspace(T)
    }
}