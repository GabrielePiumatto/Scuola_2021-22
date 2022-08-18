#Piumatto Gabriele  -Exercise 11
#Armstrong Numbers

def is_armstrong_number(number):
    num = str(number)
    sum = 0

    for digit in num:
        sum += int(digit) ** len(num)

    return sum == number  

def main():
    num = int(input("Write a number: "))
    
    if(is_armstrong_number(num) == True):
        print(f"{num} is an Armstrong number")
    elif(is_armstrong_number(num) == False):
        print(f"{num} isn't an Armstrong number")

if __name__ == "__main__":
    main()