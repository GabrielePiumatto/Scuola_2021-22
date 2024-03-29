#Piumatto Gabriele  -Exercise 16
#Space age

class SpaceAge:
    def __init__(self,secs):
        self.seconds = secs
    def on_earth(self):
        return round(self.seconds / 31557600,2)
    def on_mercury(self):
        return round(self.seconds / 31557600 / 0.2408467,2)
    def on_venus(self):
        return round(self.seconds / 31557600 / 0.61519726,2)
    def on_mars(self):
        return round(self.seconds / 31557600 / 1.8808158,2)
    def on_jupiter(self):
        return round(self.seconds / 31557600 / 11.862615,2)
    def on_saturn(self):
        return round(self.seconds / 31557600 / 29.447498,2)
    def on_uranus(self):
        return round(self.seconds / 31557600 / 84.016846,2)
    def on_neptune(self):
        return round(self.seconds / 31557600 / 164.79132,2)

def main():
    sec = int(input("Write a number: "))
    age = SpaceAge(sec)

    print(f"The solar years on mercury are {age.on_mercury()}")
    print(f"The solar years on venus are {age.on_venus()}")
    print(f"The solar years on earth are {age.on_earth()}")
    print(f"The solar years on mars are {age.on_mars()}")
    print(f"The solar years on jupiter are {age.on_jupiter()}")
    print(f"The solar years on saturn are {age.on_saturn()}")
    print(f"The solar years on uranus are {age.on_uranus()}")
    print(f"The solar years on neptune are {age.on_neptune()}")

if __name__ == "__main__":
    main()