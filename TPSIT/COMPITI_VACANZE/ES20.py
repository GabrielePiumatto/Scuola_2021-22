#Piumatto Gabriele  -Exercise 20
#Binary search

def find(search_list: list, value: int):
    index = -1
    right = 0
    left = len(search_list) - 1

    while right <= left:
        middle = (right + left) // 2
        if search_list[middle] == value:
            index = middle
            break
        elif search_list[middle] < value:
            right = middle + 1
        else:
            left = middle - 1

    if index < 0:
        raise ValueError("value not in array")
    return index

def main():
    array = []
    nn = int(input("How many numbers do you want to save in the array? "))

    for i in range(nn):
        num = int(input("Give me a number: "))
        array.append(num)
    
    search = int(input("Write the number you want to search: "))

    print(f"The number you are searching is in position {find(array, nn)}")

if __name__ == "__main__":
    main()