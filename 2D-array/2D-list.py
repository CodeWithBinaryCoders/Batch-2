row = int(input())
col = int(input())

matrix = []

for i in range(row):
    temp = []
    for j in range(col):
        temp.append(int(input()))
    matrix.append(temp)

for i in matrix:
    for j in i:
        print(j, end=" ")
    print()
