def MDC(a, b):
	while b:
		a, b = b, a % b
	return a

n = int(input())
while(n):
	a, b = [int(x) for x in input().split()]
	print(MDC(a, b))
	n = n-1