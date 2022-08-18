#Piumatto Gabriele  -Exercise 14
#Perfect numbers

def classify(number):
    aliquot_sum = 0
    if number < 1:
        raise ValueError(f'An error occurred due to the value. Make sure number is greater than 0 (input was {number}).')
    for n in range(1, number):
        if number % n == 0:
            aliquot_sum += n
    if aliquot_sum == number:
        return f"{number} is perfect"
    elif aliquot_sum > number:
        return f"{number} is abundant"
    else:
        return f"{number} is deficient"

def main():
    num = int(input("Give me a number: "))

    print(classify(num))

if __name__ == "__main__":
    main()