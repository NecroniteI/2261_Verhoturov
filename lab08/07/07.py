n = int(input())
numbers = list(map(int, input().split()))

for x in numbers:
    if x < 0:
        print("Найдено отрицательное число:", x)
        break
else:
    print("Все числа неотрицательные")