#Piumatto Gabriele  -Exercise 6
#Leap

def is_leap_year(year):
    if year % 4 == 0:
        if year % 100 == 0:
            if year % 400 == 0:
                return True
            return False
        return True
    return False

def main():
    yr = int(input("Give me a year: "))
    
    if(is_leap_year(yr) == True):
        print(f"{yr} is leap")
    elif(is_leap_year(yr) == False):
        print(f"{yr} isn't leap")

if __name__ == "__main__":
    main()