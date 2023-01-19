def solution(nums):
    return len(nums)/2 if len(list(set(nums))) > len(nums)/2 else len(list(set(nums)))
        