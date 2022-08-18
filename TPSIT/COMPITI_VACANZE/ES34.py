#Piumatto Gabriele  -Exercise 34
#High scores

class HighScores:
    def __init__(self, scores):
        self.scores = scores
    
    def latest(self):
        return self.scores[-1]
    
    
    def personal_best(self):
        return max(self.scores)
    
    def personal_top_three(self):
        return sorted(self.scores, reverse=True)[0:3]

def main():
    score = []
    h1 = HighScores(score)
    number = int(input("How many scores do you add? "))

    for i in range(number):
        scr = int(input("Write your score: "))
        score.append(scr)

    print(f"Your latest score is {h1.latest()}")
    print(f"Your best score is {h1.personal_best()}")
    print(f"Your top three is {h1.personal_top_three()}")

if __name__ == "__main__":
    main()