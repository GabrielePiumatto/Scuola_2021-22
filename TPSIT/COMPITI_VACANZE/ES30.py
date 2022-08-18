#Piumatto Gabriele  -Exercise 30
#Run Length Encoding

def decode(string):
    decoded = ""
    count = []

    for x in string:
        if x.isdigit():
            count.append(x)
            continue
        if len(count) == 0:
            count = ["1"]
        decoded += x * int("".join(count))
        count = []

    return decoded

def encode(string):
    if not string:
        return string

    encoded = ""
    count = 0
    current = string[0]

    for x in string:
        if x == current:
            count += 1
            continue
        if count > 1:
            encoded += str(count)
        encoded += current
        current = x
        count = 1
    else:
        if count > 1:
            encoded += str(count)
        encoded += current
        
    return encoded

def main():
    choice = input("ENCODING or DECODING: ")

    if(choice == "encoding"):
        words = input("Write what you want to encode: ")
        print(f"Encoded: {encode(words)}")
    elif(choice == "decoding"):
        words = input("Write what you want to decode: ")
        print(f"Decoded: {decode(words)}")

if __name__ == "__main__":
    main()