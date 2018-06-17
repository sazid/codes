inp = raw_input()
duration = raw_input()

inp = map(lambda x: int(x), inp.split(':'))
duration = map(lambda x: int(x), duration.split(':'))

hour, minute = inp
dhour, dminute = duration

shour = hour-dhour
sminute = minute-dminute

if sminute < 0:
    sminute = 60 + sminute
    shour -= 1

if shour < 0:
    shour += 24
elif shour > 23:
    shour -= 24

print '%02d:%02d' % (shour, sminute)

