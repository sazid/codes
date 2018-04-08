while True:
    a, b = map(int, input().split())
    if a == b == 0: break
    if b > a: a, b = b, a
    print(a//5-b//5+1)

