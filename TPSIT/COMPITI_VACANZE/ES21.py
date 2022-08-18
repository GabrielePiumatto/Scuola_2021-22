#Piumatto Gabriele  -Exercise 21
#Acronym

def abbreviate(words):
    letters = []

    words = words.replace('_', ' ').replace('-', ' ')
    words_split = words.split()

    letters = [word[0] for word in words_split]
    result = ''.join(letters).upper()

    return result

def main():
    word = input("Write something: ")
    print(f"The acronym is {abbreviate(word)}")

if __name__ == "__main__":
    main()