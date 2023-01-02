def solution(s):
    answer = ''
    split_array = s.split(" ")
    for word in split_array:
        for k in range(len(word)):
            if (k %2 == 0):
                answer += word[k].upper()
            else:
                answer +=word[k].lower()
        answer+=" "
    return answer[0:-1]