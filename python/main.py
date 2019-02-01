n,a,b,s = map(int, raw_input().split(' '))

if n == 1:
    if a == b == s:
        print "YES"
    else:
        print "NO"
    
elif n == 2:
    if a + b == s:
        print "YES"
    else:
        print "NO"


target = s - (a + b)
rem = n - 2

mem = {}
def f(t, r, i):
    if t == 0 and r == 0:
        return True
    if (t < 0 or r < 0 or i > b):
        return False
    
    str_rep = '%s%s%s'%(t,r,i)
    if str_rep in mem:
        return mem[str_rep]
    
    take = f(t-i, r-1, i)
    not_take = f(t, r, i+1)

    mem[str_rep] = take or not_take
    return take or not_take

if f(target, rem, a):
    print "YES"
else:
    print "NO"
