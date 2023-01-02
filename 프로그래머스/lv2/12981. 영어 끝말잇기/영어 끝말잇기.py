#중복에러 발생 유무를 확인하는 함수
#idx의 위치까지만 for문을 실행
#실행 위치를 확인하고 값을 return 하기 위한 idx, 검사하는 단어, 배열을 매개변수로 받아옴

def check_error_double(idx, word, words):
    for i in range(idx):
        if words[i] == word:
            return idx
    return 0

#끝말잇기 에러 발생 유무를 확인하는 함수
#실행 위치를 확인하고 값을 return 하기 위한 idx, 검사하는 단어 두개를 매개변수로 받아옴
def check_error_start(idx, first, second):
    if first[-1] != second[0]:
        return idx
    else:
        return 0
    
def solution(n, words):
    answer = []
    value = 0; # 에러가 생긴 index를 저장하기 위한 변수
    
    # for문은 마지막 원소 전까지만 접근, second 변수에서 i+1의 원소를 담기떄문
    
    for i in range(len(words)-1): 
        first = words[i] # 첫번째 단어
        second = words[i+1] # 두번쨰 단어
        
        # second 단어부터 check_error_double 함수를 돌림
        # 첫 단어는 중복될수가 없기떄문
        # 중복 에러가 생긴 idx 값을 받아오는 함수
        double_error_idx = check_error_double(i+1,second,words)
        
        # 끝말잇기 에러가 생긴 idx 값을 받아오는 함수
        start_error_idx = check_error_start(i+1,first,second)
        
        #에러가 발생했다면 0이 아닌 다른 값이 담겨있기에 value에 해당 값을 담고 break
        if (double_error_idx != 0) :
            value =double_error_idx
            break;
        elif start_error_idx != 0:
            value = start_error_idx
            break;
        else:
            continue
     
    #value 값으로 원하는 값을 answer에 담음
    #value = 0이면 [0,0] 이므로 따로 else 처리
    if (value != 0): 
        answer.append(value%n +1)
        answer.append(int(value/n) +1) # /시 소수점이 되므로 int 처리
    else:
        answer.append(0)
        answer.append(0)
        
    return answer