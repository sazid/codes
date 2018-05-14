data class Item(var name: String, var cost: Int, var weight: Int)

fun main(args: Array<String>) {
    
    val items = ArrayList<Item>()
	val choices = ArrayList<Item>()
    
    // sentinel item
    items.add(Item("sentinel", 0, 0))
    
    // items
    items.add(Item("", 3, 2))
    items.add(Item("", 4, 3))
    items.add(Item("", 5, 4))
    items.add(Item("", 6, 5))
    
    val targetWeight = 5
    
    val dp = Array(items.size, { IntArray(targetWeight + 1) })
    
    for (i in 1..items.size - 1) {
    	for (j in 1..targetWeight) {
			val item = items[i]
            
            if (item.weight > j) {
                dp[i][j] = dp[i-1][j]
            } else {
                var r1 = dp[i-1][j]
                var r2 = item.cost + dp[i-1][j - item.weight]
                
				dp[i][j] = if (r1 > r2) r1 else r2
            }
        }
    }

	var i = items.size - 1
	var j = targetWeight
	while (i > 1) {
		val item = items[i]
		if (dp[i][j] - dp[i-1][j - item.weight] == item.cost) {
			choices.add(item)
			j -= item.weight
		}
		i--
	}

    for (i in 0..items.size-1) {
        for (j in 0..targetWeight) {
            val x = dp[i][j]
            print("$x ")
        }
        print("\n")
    }
    println(dp[items.size-1][targetWeight])
	println(choices)

}

