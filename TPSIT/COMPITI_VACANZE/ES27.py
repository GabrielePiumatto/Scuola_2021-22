#Piumatto Gabriele  -Exercise 27
#Series

def slices(series, length):
    if not series:
        raise ValueError("series cannot be empty")
    if length > len(series):
        raise ValueError("slice length cannot be greater than series length")
    if length == 0:
        raise ValueError("slice length cannot be zero")
    if length < 0:
        raise ValueError("slice length cannot be negative")

    return [series[starting_index:starting_index+length] for starting_index in range(len(series)-length+1)]


def main():
    num = input("Write a series of number: ")
    long = int(input("Write the legth of the substrings: "))
    print(f"The string sliced in substrings with length {long} are {slices(num, long)}")

if __name__ == "__main__":
    main()