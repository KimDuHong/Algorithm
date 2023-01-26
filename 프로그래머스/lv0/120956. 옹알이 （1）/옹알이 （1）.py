def solution(babbling):
    set_babb = babbling
    # for i in babbling:
    #     if i in set_babb:
    #         pass
    #     else:
    #         set_babb.append(i)
    baby = ["aya", "ye", "woo", "ma"]
    baby.sort()
    count = 0
    for a in range(len(baby)):
        if baby[a] in set_babb:
            count += set_babb.count(baby[a])
            print(baby[a])
        for b in range(len(baby)):
            if baby[a] == baby[b]:
                continue
                print(baby[a])
            elif (baby[a] + baby[b]) in set_babb:
                count += set_babb.count(baby[a] + baby[b])
                print(baby[a]+baby[b])
            for c in range(len(baby)):
                if baby[a] == baby[b] or baby[a] == baby[c] or baby[b] == baby[c]:
                    continue
                elif (baby[a] + baby[b] + baby[c]) in set_babb:
                    count += set_babb.count(baby[a] + baby[b] + baby[c])
                    print(baby[a] + baby[b] + baby[c])
                for d in range(len(baby)):
                    if baby[a] == baby[b] or baby[a] == baby[c] or baby[a] == baby[d] or baby[b] == baby[c] or baby[b] == baby[d] or baby[c] == baby[d]:
                        continue
                    elif (baby[a] + baby[b] + baby[c] + baby[d]) in set_babb:
                        count += set_babb.count(baby[a] + baby[b] + baby[c] + baby[d])
                        print(baby[a] + baby[b] + baby[c] + baby[d])
    return count
