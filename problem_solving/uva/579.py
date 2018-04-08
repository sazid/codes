
while True:
    s = input()
    if s == "0:00": break
    h, m = map(int, s.split(':'))
    ang = abs(h*30.0+0.5*m-6*m)
    # ang = round(ang, 3)
    if (360-ang < ang): ang = 360-ang
    print("{0:.3f}".format(ang))

