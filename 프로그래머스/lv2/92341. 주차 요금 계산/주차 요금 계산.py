def money(fees,time):
    import math
    result = []
    car_num = sorted(time)
    for num in car_num:
        if (time[num] <= fees[0]):
            result.append(fees[1])
        else:
            tmp = fees[1] + math.ceil((time[num]-fees[0]) / fees[2]) * fees[3]
            result.append(tmp)
    return result
def time_count(intime,outtime):
    intime_min = int(intime[:2]) * 60 + int(intime[3:])
    outtime_min = int(outtime[:2]) * 60 + int(outtime[3:])
    time_count = outtime_min - intime_min
    return time_count
def solution(fees, records):
    answer = []
    parking_time = {num.split(" ")[1] : 0 for num in records}
    parking = {}
    for record in records:
        tmp = record.split(" ")
        if tmp[2] == "IN":
            parking[tmp[1]] = tmp[0]
        elif tmp[2] =="OUT":
            parking_time[tmp[1]] += time_count(parking[tmp[1]],tmp[0])
            parking.pop(tmp[1])
    if parking:
        for cars in parking.keys():
            parking_time[cars]+=time_count(parking[cars],"23:59")
    answer = money(fees,parking_time)
    return answer