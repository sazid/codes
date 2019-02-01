inf=float('inf')
while True:
	n = int(input())
	if n==0: break
	a=[]
	sp=[]
	max_count=inf
	for i in range(n):
		x=input()
		a.append(x)
		cnt = x.count(' ')
		sp.append(cnt)
		max_count=min(max_count,cnt)
	
	if n==1:
		print(0)
		continue
	
	s=0
	for i in sp:
		s+=abs(max_count-i)
	
	print(s)
	
