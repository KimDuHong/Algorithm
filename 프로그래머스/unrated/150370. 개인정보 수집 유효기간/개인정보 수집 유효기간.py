from datetime import date
from dateutil.relativedelta import relativedelta
def solution(today, terms, privacies):
    answer = []
    term = {}
    today = today.split(".")
    today_time = date(int(today[0]),int(today[1]),int(today[2]))
    for i in terms:
        kind, month = i.split(' ') 
        term[kind] = int(month)
        
    for index,i in enumerate(privacies):
        kind  = i[-1]
        day = i[:-1].split(".")
        delete_day = date(int(day[0]), int(day[1]), int(day[2]))+relativedelta(months=term[kind])
        if (delete_day <= today_time):
            answer.append(index+1)
    return answer