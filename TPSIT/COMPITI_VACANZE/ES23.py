#Piumatto Gabriele  -Exercise 23
#Protein translation

from textwrap import wrap

def proteins(strand):
    codons = wrap(strand, 3)

    codons_to_protein = {
        'AUG': "Methionine",
        'UUU': "Phenylalanine",
        'UUC': "Phenylalanine",
        'UUA': "Leucine", 
        'UUG': "Leucine",
        'UCU': "Serine",
        'UCC': "Serine", 
        'UCA': "Serine", 
        'UCG': "Serine",
        'UAU': "Tyrosine",
        'UAC': "Tyrosine",
        'UGU': "Cysteine",
        'UGC': "Cysteine",
        'UGG': "Tryptophan",
        'UAA': 'STOP', 
        'UAG': 'STOP',
        'UGA': 'STOP'    
    }

    RNA = []
    for i in codons:
        if codons_to_protein[i] == 'STOP':
            break
        else:
            RNA.append(codons_to_protein[i])
    
    return RNA

def main():
    word = input("Write the RNA part: ")
    print(f"The proteins are {proteins(word)}")

if __name__ == "__main__":
    main()