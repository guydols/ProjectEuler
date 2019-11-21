def isprime(n):
	if n<=1:
		return 0
	c=2
	m=n
	while c<m+1:
		m=n/c
		if n%c==0:
			return 0
		c+=1
	return 1

def xthprime(x):
	p=0
	for x in range(1,x,1):
		if isprime(x):
			p=p+x
	return p

if __name__ == "__main__":
	print (xthprime(2000000)+2)
