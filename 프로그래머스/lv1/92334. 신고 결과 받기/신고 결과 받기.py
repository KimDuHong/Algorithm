def solution(id_list, report, k):
    answer = [0] * len(id_list)
    id_report = {id: [] for id in id_list}
    report = list(set(report))
    for i in report:
        id_report[i.split()[1]].append(i.split()[0])
        
    for item in id_report.values():
        if len(item) >= k:
            for j in item:
                answer[id_list.index(j)]+=1
    return answer
