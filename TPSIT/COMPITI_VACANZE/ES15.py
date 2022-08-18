#Piumatto Gabriele  -Exercise 15
#Isbn verifier

def is_valid(isbn):
    total = 0
    index = 10

    for char in isbn:
        if char == '-':
            continue

        if char == 'X' and index == 1:
            total += 10
            index -= 1
            continue

        if char.isdigit():
            total += int(char) * index
            index -= 1
            continue
        return False
    return index == 0 and total % 11 == 0

def main():
    isbn = input("Give me an ISBN: ")

    if is_valid(isbn) == True:
        print(f"{isbn} is valid")
    elif is_valid(isbn) == False:
        print(f"{isbn} isn't valid")

if __name__ == "__main__":
    main()