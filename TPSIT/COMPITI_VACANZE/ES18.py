#Piumatto Gabriele  -Exercise 18
#Triangle

def equilateral(sides):
    a, b, c = sorted(sides)
    return 0 < a == c

def isosceles(sides):
    a, b, c = sorted(sides)
    return 0 < a and c < a + b and b in (a, c)
    
def scalene(sides):
    a, b, c = sorted(sides)
    return 0 < a < b < c < a + b

def main():
    s = []

    for i in range(3):
        num = int(input("Write the length of the side: "))
        s.append(num)

    if equilateral(s) == True:
        print("This triangle is equilateral")

    elif isosceles(s) == True:
        print("This triangle is isosceles")

    elif scalene(s) == True:
        print("This triangle is scalene")

    else:
        print("No type triangle")

if __name__ == "__main__":
    main()