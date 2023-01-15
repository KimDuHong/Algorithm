def solution(n, arr1, arr2):
    answer = []
    for i,j in zip(arr1,arr2):
        answer.append(str(bin(i|j)[2:]).rjust(n,"0").replace("1","#").replace("0"," "))
    return answer