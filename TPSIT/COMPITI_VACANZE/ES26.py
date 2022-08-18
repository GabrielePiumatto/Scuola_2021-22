#Piumatto Gabriele  -Exercise 26
#Nth prime

def is_prime(n):
    if n <= 1:
        return False
    elif n <= 3:
        return True
    elif n % 2 == 0 or n % 3 == 0:
        return False
    for i in range(5, int(n ** 0.5) + 1, 6):
        if n % i == 0 or n % (i + 2) == 0:
            return False
    return True

def nth_prime(n):
    if n < 1:
        raise ValueError
    primes = [2]
    number = 3
    while len(primes) < n:
        if is_prime(number):
            primes.append(number)
        number += 2
    return primes[-1]

def main():
    num = int(input("Give me a number: "))
    print(f"The nth prime of {num} is {nth_prime(num)}")

if __name__ == "__main__":
    main()