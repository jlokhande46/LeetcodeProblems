iclass Solution:
    def dayOfYear(self, date: str) -> int:
        year=int(date[0:4])
        month=int(date[5:7])
        day=int(date[8:10])
        dayOfYear=day
        # print(year,day,month)
        for i in range(month-1):
            if(i==1):
                if((year%4==0 and year%100!=0) or (year%400==0)):
                    dayOfYear+=29
                else:
                    dayOfYear+=28
            elif(i in [0,2,4,6,7,9,11]):
                dayOfYear+=31
            else:
                dayOfYear+=30
        # if()
        return dayOfYear
