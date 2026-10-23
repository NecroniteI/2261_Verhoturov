letters = "abcdefghijklmnopqrstuvwxyz"
value = 1

for letter in letters:
    for i in range(100):
        globals()[f"{letter}{i}"] = value
        value += 1

print(a0, a99)
print(b0, b99)
print(z0, z99)