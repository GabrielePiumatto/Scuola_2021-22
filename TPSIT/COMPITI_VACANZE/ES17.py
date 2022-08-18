#Piumatto Gabriele  -Exercise 17
#Collatz conjecture

def steps(number):
    if number < 1:
        raise ValueError('Only positive integers are allowed')
    counter = 0
    while number > 1:
        number = 3 * number + 1 if number % 2 else number / 2
        counter += 1
    return counter

def main():
    num = int(input("Give me a number: "))
    print(f"The number of the steps to reach 1: {steps(num)}")

if __name__ == "__main__":
    main()