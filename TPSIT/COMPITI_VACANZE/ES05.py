#Piumatto Gabriele  -Exercise 5
#Resistor Color

def color_code(color):
    return colors().index(color) 

def colors():
    return [
        'black', 'brown', 'red', 'orange', 'yellow', 'green', 'blue', 'violet',
        'grey', 'white'
    ]

def main():
    col = input("write a color: ")
    print(color_code(col))

if __name__ == "__main__":
    main()