t = long(raw_input())

def f(x):
    if x == 0:
        return 1
    elif x == 1:
        return 3
    else:
        return 3*f(x-1) + 1

print f(t)

