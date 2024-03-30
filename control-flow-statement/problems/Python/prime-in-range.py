n = int(input("Enter the limit : "))

for i in range(2, n + 1): # traverse the range
    # print 👉 i 👈 if it is prime

    check = False

    for divisor in range(2, i):
        if (0 == i % divisor):
            check = True
            break

    if not check: # if check == False
        print(i)