def step1(id):
    return id.lower()

def step2(id):
    tmp = ""
    for i in id:
        if (i >='0' and i <= '9') or (i >= 'a' and i  <= 'z'):
            tmp+=i
        elif i=='-' or i=='_' or i  == '.':
            tmp+=i
    return tmp

def step3(id):
    while ".." in id:
        id = id.replace("..", ".")
    return id

def step4(id):
    id = id[1:] if id[0] == '.' and len(id) > 1 else id
    id = id[:-1] if id[-1] == '.' else id
    return id

def step5(id):
    return id if id else "a"

def step6(id):
    if len(id) >=16:
        id = id[:15]
        if id[-1] == '.':
            return id[:-1]
        else:
            return id
    else:
        return id
    
def step7(id):
    while(len(id) <3):
        id+=id[-1]
    return id

def solution(new_id):
    return step7(step6(step5(step4(step3(step2(step1(new_id)))))))