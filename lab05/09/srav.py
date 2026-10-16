p1, q1, p2, q2, p3, q3, p4, q4 = map(int, input().split())

a = p1 * q2 + p2 * q1
b = q1 * q2
c = p3 * q4 + p4 * q3
d = q3 * q4

if b < 0:
    a, b = -a, -b
if d < 0:
    c, d = -c, -d

left = a * d
right = c * b

if left > right:
    print(1)
elif left < right:
    print(-1)
else:
    print(0)