def factorial(n,ans):
	if n==0:
		return ans
	if ans==0:
		ans=n
		n-=1
		ans=factorial(n,ans)
		return ans
	else:
		ans=ans*n
		n-=1
		ans=factorial(n,ans)
		return ans

def count(n):
	ans=0
	sumlist=list(str(n))
	for x in sumlist:
		ans+=int(x)
	return ans

if __name__ == '__main__':
	print(count(factorial(100,0)))
