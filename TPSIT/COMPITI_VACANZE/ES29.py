#Piumatto Gabriele  -Exercise 29
#Matching brackets

def is_paired(input_string):
    pairs = {"{": "}", "(": ")", "[": "]"}
    brackets = []

    for char in input_string:
        if char in ("[", "{", "("):
            brackets.append(char)
        elif char in ("]", "}", ")"):
            try:
                open_br = brackets.pop()
            except:
                return False
            if not char == pairs[open_br]:
                return False
    return not brackets 

def main():
    brackets = input("Write a string of brackets: ")

    if(is_paired(brackets) == True):
        print("Your string is paired")
    elif(is_paired(brackets) == False):
        print("Your string isn't paired")

if __name__ == "__main__":
    main()