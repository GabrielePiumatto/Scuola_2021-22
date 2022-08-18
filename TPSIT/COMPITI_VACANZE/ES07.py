#Piumatto Gabriele  -Exercise 7
#Pangram

import string

def is_pangram(sentence):

    sentence = set(sentence.lower())
    alphabet = set(string.ascii_lowercase)

    return sentence >= alphabet

def main():
    sen = input("Write something: ")
    
    if(is_pangram(sen) == True):
        print("This sentence is a pangram")
    elif(is_pangram(sen) == False):
        print("This sentence isn't a pangram")

if __name__ == "__main__":
    main()