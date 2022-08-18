#Piumatto Gabriele  -Exercise 35
#Clock

class Clock:
    def __init__(self, hour, minute):
        self.hour = hour
        self.minute = minute
        while self.hour < 0:
            self.hour += 24
        while self.hour >= 24:
            self.hour -= 24
        while self.minute < 0:
            self.minute += 60
            self.hour -= 1
            if self.hour < 0:
                self.hour += 24
        while self.minute > 59:
            self.minute = self.minute - 60
            self.hour += 1
            if self.hour >= 24:
                self.hour = self.hour - 24
                
    def __repr__(self):
        return 'Clock({}, {})'.format(self.hour, self.minute)

    def __str__(self):
        return '{:02d}:{:02d}'.format(self.hour, self.minute)
    
def main():
    clock = Clock(16, 41)
    
    print(clock.__repr__())
    print(clock.__str__())

if __name__ == '__main__':
    main()