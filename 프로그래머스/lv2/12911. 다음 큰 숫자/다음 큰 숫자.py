def number_of_binary_zero(num):
    num = bin(num)[2:]
    return str(num).count("1")
def solution(n):
    answer = 0
    origin_zero_count = number_of_binary_zero(n)
    while(1):
        n+=1
        if(number_of_binary_zero(n) == origin_zero_count):
            break
    return n