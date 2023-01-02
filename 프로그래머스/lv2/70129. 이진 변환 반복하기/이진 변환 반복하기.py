def binary(s):
    binaryNum = format(s, 'b')
    return binaryNum[2:]
def solution(s):
    answer = []
    count_zero = 0
    count = 0
    while(1):
        count+=1
        count_zero += s.count("0")
        s = format(len(s) - s.count("0"),'b')
        if(s == "1"):
            break
    answer.append(count)
    answer.append(count_zero)
    return answer