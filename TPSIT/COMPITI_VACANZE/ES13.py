#Piumatto Gabriele  -Exercise 13
#Difference of squares

def difference(n):
    return square_of_sum(n) - sum_of_squares(n)

def square_of_sum(n):
    return sum(range(1, n+1))**2
    
def sum_of_squares(n):
    return sum(i*i for i in range(1, n+1))

def main():
    num = int(input("Give me a number: "))

    print(f"The difference between square of sum and sum of squares is {difference(num)}")

if __name__ == "__main__":
    main()