def solution(numbers):
    answer = []
    for i in range(len(numbers)):
        for k in range(i+1, len(numbers)):
            answer.append(numbers[i] + numbers[k])
    answer = sorted(list(set(answer)))
    return answer