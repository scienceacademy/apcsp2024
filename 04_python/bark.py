from sys import argv

def main():
    if len(argv) != 2:
        break
    bark(int(argv[1]))

def bark(n):
    for i in range(n):
        print("Bark")

main()
