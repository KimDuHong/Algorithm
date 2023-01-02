def solution(sizes):
    answer = 0
    data = []
    for size in sizes:		 #data를 1차원 배열로 만들기
        for i in size:
            data.append(i)

    data.sort(reverse=True)  #정렬을 통해 max min값을 구한다.
    max = data[0]
    min = data[len(data) - 1]

    for size in sizes:
        if min < size[0] and min < size[1]: #min값을 sizes요소들과 비교후 교체
            if size[0] < size[1]:
                min = size[0]
            else:
                min = size[1]


    answer = min * max
    return answer

