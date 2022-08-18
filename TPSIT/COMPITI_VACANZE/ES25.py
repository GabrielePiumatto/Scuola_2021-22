#Piumatto Gabriele  -Exercise 25
#Robot name

from string import ascii_uppercase
import random
import os

class Robot(object):
    def __init__(self):
        self.robot_name = self.name_generator()

    def name_generator(self):
        return ascii_uppercase[random.randint(0, len(ascii_uppercase) - 1)] + \
               ascii_uppercase[random.randint(0, len(ascii_uppercase) - 1)] + \
               str(random.randint(100, 999))

    def reset(self):
        random.seed(os.urandom(256))
        self.robot_name = self.name_generator()

    @property
    def name(self):
        return self.robot_name

def main():
    r1 = Robot()
    print(f"The robot's name is {r1.name_generator()}")

if __name__ == "__main__":
    main()