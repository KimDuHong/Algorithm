def solution(record):
    answer = []
    status_array = []
    dic = {}
    user_id =[]
    for i in record:
        tmp = i.split(" ")
        if len(tmp) != 2:
            dic[tmp[1]] = tmp[2]
        if tmp[0] == "Enter":
            user_id.append(tmp[1])
            status_array.append("님이 들어왔습니다.")
        elif tmp[0] == "Leave":
            user_id.append(tmp[1])
            status_array.append("님이 나갔습니다.")
    for i,j in zip(user_id,status_array):
        answer.append(dic[i] + j)
    return answer