#Piumatto Gabriele  -Exercise 8
#Grains

def square(number):    
    if number <= 0 or number > 64:
        raise ValueError("square must be between 1 and 64")
    
    return 2**(number-1)

def total(number):
    return sum(2**(item) for item in range(number))

def main():
    nog = int(input("Write a number: "))
    print(f"Number of grains: {total(nog)}")

if __name__ == "__main__":
    main()