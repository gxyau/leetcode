import java.util.Queue
import java.util.LinkedList
class SolutionDay17 {
    fun numIslands(grid: Array<CharArray>): Int {
        var count = 0
        val nrow = grid.size
        val ncol = grid[0].size

        if(nrow == 0 || ncol == 0) return 0
        val d = intArrayOf(0, 1, 0, -1, 0)

        for(i in grid.indices)
            for(j in grid[0].indices)
                if(grid[i][j] == '1'){
                    count++
                    var q: Queue<Int> = LinkedList<Int>()
                    q.offer(i * ncol + j)
                    grid[i][j] = '0'
                    while(!q.isEmpty()){
                        val cur = q.poll()
                        val r = cur / ncol
                        val c = cur % ncol
                        for(k in 0..3)
                            if(r+d[k]>=0 && r+d[k]<nrow && c+d[k+1]>=0 && c+d[k+1]<ncol && grid[r+d[k]][c+d[k+1]]=='1'){
                                q.offer(cur+d[k]*ncol+d[k+1])
                                grid[r+d[k]][c+d[k+1]] = '0'
                            }
                    }
                }
        return count
    }
}