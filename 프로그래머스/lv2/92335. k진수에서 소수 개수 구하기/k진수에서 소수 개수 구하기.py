import math
def convert(n, k):
    tmp = ''
    while n > 0:
        n, mod = divmod(n, k)
        tmp += str(mod)
    return tmp[::-1]
def is_prime(num):
    if not num or num == '1':
        return False
    num = int(num)
    for i in range(2,int(math.sqrt(num)+1)):
        if num % i ==0:
            return False
    return True
def solution(n, k):
    answer = 0
    nums = convert(n,k).split("0")
    for i in nums:
        if is_prime(i):
            answer+=1
    return answer