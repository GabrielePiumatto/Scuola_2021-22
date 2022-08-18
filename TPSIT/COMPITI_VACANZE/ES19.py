#Piumatto Gabriele  -Exercise 19
#Rotational cipher

def rotate(s, amount):
	UPPERCASE = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
	LOWERCASE = 'abcdefghijklmnopqrstuvwxyz'

	upper_shifted = UPPERCASE[amount:] + UPPERCASE[:amount]
	lower_shifted = LOWERCASE[amount:] + LOWERCASE[:amount]
	translation = str.maketrans(UPPERCASE + LOWERCASE, upper_shifted + lower_shifted)

	return s.translate(translation)

def main():
    st = input("Write something: ")
    am = int(input("Write the amount to rotate by: "))

    print(f"The string rotated is {rotate(st, am)}")

if __name__ == "__main__":
    main()