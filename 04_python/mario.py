while True:
    h = int(input("Height: "))
    if 0 < h < 9:
        break

for i in range(1, h+1):
    print(" " * (h - i) + "#" * i)

