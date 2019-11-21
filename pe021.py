import sys
def amicable(x,y,ans):
	if x == 0:
		return ans
	if float(y/x).is_integer():
		ans.append(x)
		x -= 1
		ans=amicable(x,y,ans)
		return ans
	else:
		x -= 1
		ans=amicable(x,y,ans)
		return ans
		
sys.setrecursionlimit(100000)
if __name__ == '__main__':
	inp=10000
	for x in range(1,9999):
		a=sum(amicable(x))
		if x == sum(amicable(a))
	print(amicable(inp-1,inp,ans=[]))

	#redo code
	
