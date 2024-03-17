num = int(input("Enter a number : "))

if num < 2: # if invalid input
    print("Invalid input.")
else: # if valid input
    for i in range(2, num): # 2 to n - 1
        if (0 == num % i):
            print(f"{num} is non-prime.")
            exit()
    print(f"{num} is prime.")

