def solution(common):
    return common[-1] + common[-1] - common[-2] if common[-1] - common[-2] == common[-2] - common[-3] else common[-1] * common[-1]/common[-2]
   