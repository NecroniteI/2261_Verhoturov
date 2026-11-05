x = [int(t) for t in input().split()]
i = 0
while i < len(x) and ((i > x[i] or x[i] >= 2*i) and (3*i > x[i] or x[i] >= 4*i)):
   i += 1
print(i)