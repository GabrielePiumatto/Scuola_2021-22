#Piumatto Gabriele  -Exercise 24
#Scrabble score

scores = {
    "AEIOULNRST": 1,
    "DG": 2,
    "BCMP": 3,
    "FHVWY": 4,
    "K": 5,
    "JX": 8,
    "QZ": 10,
}

def score(word):
    word = word.upper()
    word_score = 0
    for char in word:
        for key, value in scores.items():
            if char in key:
                word_score += value
    return word_score  

def main():
    word = input("Give me a word: ")
    print(f"Your score is {score(word)}")

if __name__ == "__main__":
    main()