import math
n = int(input())
k = round(math.sqrt(n))
if(n<=k*k):
  a = 2*k
else:
  a = 2*k + 1
print(a)
