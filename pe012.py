import math
f=0

def trinum(x):
	z=0
	for y in range(x,0,-1):
		z=z+y
	return z

def factors(x):
	return sum(2 for i in range(1, round(math.sqrt(x)+1)) if not x % i)

def main():
	global f
	x=1
	while f<500:
		f=0
		f=factors(trinum(x))
		x=x+1
	return trinum(x-1)

if __name__ == '__main__':
	print(main())
