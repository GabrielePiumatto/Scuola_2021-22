#Piumatto Gabriele  -Exercise 31
#Diamond

def rows(letter):
    a = ord(letter) - 65
    res = []
    for i in range(a+1):
        if i == 0:
            res.append(""*(a) + 'A' + ""*(a))
        else:
            res.append("" * (a-i) + chr(i+65) + "" * (i*2-1) + chr(i+65) + "" * (a-i))
            
    return res + res[0:-1][::-1]

def main():
    number = int(input("How many letters do you want to drive? "))
    
    for i in range(number):
        let = input("Write a letter: ")
    
    print(rows(let))

if __name__ == "__main__":
    main()