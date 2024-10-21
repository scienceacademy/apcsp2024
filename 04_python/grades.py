N = 3
grades = []
for i in range(N):
    grades.append(int(input("Score: ")))

avg = sum(grades) / N
print(avg)
