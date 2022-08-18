#Piumatto Gabriele  -Exercise 28
#Phone number

import re

class Phone(object):
    def __init__(self, number):
        number = re.sub("[^0-9]","", number)
        digits = len(number)
        
        if not 9 < digits < 12:
            self.number = "0000000000"
        elif digits == 10:
            self.number = number
        elif digits == 11:
            if number[0] == '1':
                self.number = number[1:]
            else:
                self.number = "0000000000"      
    
    def area_code(self):
        return self.number[:3]
    
    def entire(self):
        return "(" + self.area_code() + ") " + self.number[3:6] + '-' + self.number[6:]

def main():
    num = input("Give me a phone number: ")
    p1 = Phone(num)
    print(f"Your area code: {p1.area_code()}")
    print(f"Your phone number: {p1.entire()}")

if __name__ == "__main__":
    main()