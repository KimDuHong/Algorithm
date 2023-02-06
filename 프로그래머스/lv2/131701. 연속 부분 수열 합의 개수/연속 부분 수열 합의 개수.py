def solution(elements):
    length = len(elements)
    elements*=2
    all_sum = []
    for i in range(length):
        for k in range(length):
            all_sum.append(sum(elements[i:i+k]))
    return len(set(all_sum))