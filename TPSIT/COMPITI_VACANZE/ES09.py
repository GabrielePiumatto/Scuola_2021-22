#Piumatto Gabriele  -Exercise 9
#Isogram

from tkinter import W

def is_isogram(word):
    letters = [ch for ch in word.lower() if "a" <= ch <= "z"]

    return len(letters) == len(set(letters))

def main():
    word = input("Write something: ")

    if(is_isogram(word) == True):
        print(f"{word} is an isogram")
    elif(is_isogram(word) == False):
        print(f"{word} isn't an isogram")

if __name__ == "__main__":
    main()