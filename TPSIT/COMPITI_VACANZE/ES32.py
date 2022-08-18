#Piumatto Gabriele  -Exercise 32
#Prime Factors

def factors(input_number):
    results = []
    divisor = 2
    
    while input_number > 1:
        while input_number % divisor == 0:
            results.append(divisor)
            input_number //= divisor
        
        divisor += 1
    
        if divisor**2 > input_number and input_number > 1: 
            results.append(input_number)
            break
        
    return sorted(results)

def main():
    number = int(input("Give me a number: "))
    
    print(f"The prime factory of {number} are: {factors(number)}")

if __name__ == "__main__":
    main()