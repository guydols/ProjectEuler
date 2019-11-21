def terms(n):
	t=1
	while n!=1:
		if n%2==0:
			n=n/2
			t+=1
		else:
			n=3*n+1
			t+=1
	return t

if __name__ == '__main__':
	n=0
	t=0
	z=0
	for x in range(1,1000000):
		t=terms(x)
		if t>z:
			z=t
			n=x
	print(n)