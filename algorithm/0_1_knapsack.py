
items = [0, 1, 2, 3]
prices = [0, 3000, 2000, 1500]
weight = [0, 4, 3, 1]

# size of knapsack
knapsack = 4

# 2x2 grid
# x axis stores the weight information
# y axis stores the items information
dp = []
for i in range(len(items) + 1):
    dp.append([-1 for j in range(knapsack + 1)])
    dp[i][0] = 0

dp[0] = [0 for i in range(knapsack + 1)]

def ks(n, c):
    if dp[n][c] != -1:
        return dp[n][c]

    if n == 0 or c == 0:
        result = 0
    elif weight[n] > c:
        result = ks(n-1, c)
    else:
        without_n = ks(n-1, c)
        with_n = prices[n] + ks(n-1, c-weight[n])
        result = max(without_n, with_n)

    dp[n][c] = result
    return result

print ks(4, 4)

