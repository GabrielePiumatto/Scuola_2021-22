#Piumatto Gabriele  -Exercise 2
#Two Fer

def two_fer(name = "you"):
    return ('One for ' + name + ', one for me.')

def main():
    name = input("What's your name?")
    print(two_fer(name))

if __name__ == "__main__":
    main()