#Piumatto Gabriele  -Exercise 33
#Roman numerals

def roman(number):
    decimal = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1];
    roman = ["M", "CM","D","CD","C", "XC", "L", "XL", "X","IX","V","IV","I"]
    result = ''

    for i in range(len(decimal)):
        while number % decimal[i] < number:
            result += roman[i]
            number -= decimal[i]

    return result

def main():
    num = int(input("Give me a number: "))
    
    print(f"{num} in roman is {roman(num)}")

if __name__ == "__main__":
    main()