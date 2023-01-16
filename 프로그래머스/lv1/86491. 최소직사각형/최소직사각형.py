def solution(sizes):
    answer = 0
    array_a = []
    array_b = []
    for i in sizes:
        array_a.append(max(i))
        array_b.append(min(i))
    answer = max(array_a) * max(array_b)
    return answer