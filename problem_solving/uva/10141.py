
counter = 1
f = False

while True:
	n, p = map(int, input().split())
	if n == p == 0: break
	elif f:
		f = False
		print()
	
	for i in range(n):
		s = input()

	rfp_list = []

	for i in range(p):
		rfp_name = input()
		d, r = input().split()
		d = float(d)
		r = int(r)

		for j in range(r):
			s = input()

		rfp = {
			'name': rfp_name,
			'id': counter,
			'price': d,
			'reqno': r
		}

		rfp_list.append(rfp)

	rfp = None
	for i in rfp_list:
		if not rfp:
			rfp = i
			continue

		if rfp['reqno'] < i['reqno']:
			rfp = i
		elif rfp['reqno'] == i['reqno']:
			if rfp['price'] > i['price']:
				rfp = i

	print("RFP #%s" % rfp['id'])
	print(rfp['name'])

	counter += 1
	f = True
