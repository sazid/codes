# python3
from itertools import permutations

i = input()
inf = float('inf')
smallest = inf

for x in permutations(i):
    x = ''.join(x)
    d = int(x)

    digit_count = 0
    r = d
    while r > 0:
        r = r // 10
        digit_count += 1

    ii = int(i)
    if smallest > d and d > ii and len(i) == digit_count:
        smallest = d

if smallest == inf:
    print(0)
else:
    print(smallest)

