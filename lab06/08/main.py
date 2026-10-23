a = ["Hello", "world"]
b = a
c = a[:]

print(id(a), id(b), id(c))
print(a is b)
print(a is c)