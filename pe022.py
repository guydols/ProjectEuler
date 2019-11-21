def amicable(n):
	sn = 0 # sum of amicable numbers under n
	for x in range(1,n):
		if n%x == 0:
			sn = sn + x
	return sn

def loop(n):
	sn = 0
	for x in range(1,n-1):
		sn = sn + amicable(x)
	return sn

if __name__ == '__main__':
	print(loop(10000))
