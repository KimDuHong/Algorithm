def solution(arr):
    answer = 0
    max_value = max(arr) 
    multiply = 1
    while(1):
        temp = max_value * multiply
        flag = False
        for i in arr:
            if (temp %i !=0):
                flag = False
                break
            else:
                flag = True
                continue
        if(flag):
            break
        else:
            multiply +=1
    answer = temp
    return answer