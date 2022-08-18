#Piumatto Gabriele  -Exercise 1
#Gigasecond

import datetime
from datetime import date, timedelta

def add_gigasecond(start_date):
    GIGASECOND = 10**9
    return start_date + timedelta(seconds=GIGASECOND)

def main():
    date = datetime.date.today()
    print(add_gigasecond(date))

if __name__ == "__main__" :
    main()