#Piumatto Gabriele  -Exercise 10
#Hamming

def hamming(dna1, dna2):
    ham_distance = abs(len(dna1) - len(dna2))
    zipped_dna = zip(dna1, dna2)

    for i, j in zipped_dna:
    	if i != j:
    		ham_distance += 1

    return ham_distance

def main():
    part1 = input("Write first part of DNA: ")
    part2 = input("Write second part of DNA: ")

    print(f"Hamming difference between dna parts: {hamming(part1, part2)}")

if __name__ == "__main__":
    main()