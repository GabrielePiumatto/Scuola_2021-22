#Piumatto Gabriele  -Exercise 4
#String Reverse

def reverse(input):
    return input[::-1]

def main():
    word = input("Write something: ")
    print(reverse(word))

if __name__ == "__main__":
    main()