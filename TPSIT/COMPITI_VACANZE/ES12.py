#Piumatto Gabriele  -Exercise 12
#Darts

from math import sqrt

def score(x, y):
    distance = sqrt(x * x + y * y)
    if distance > 10:
        return 0
    elif distance > 5:
        return 1
    elif distance > 1:
        return 5
    else:
        return 10

def main():
    xc = int(input("Write the parameters to caclulate the distance: "))
    yc = int(input("Write the parameters to caclulate the distance: "))
    
    print(f"Your score is {score(xc, yc)}")

if __name__ == "__main__":
    main()