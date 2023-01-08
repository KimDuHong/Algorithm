def solution(dartResult):
    answer = 0
    score = []
    for i in range(len(dartResult)):
        if "0"<=dartResult[i]<="9": 
            result = int(dartResult[i])
            if dartResult[i+1] == "0": 
                continue
            if i-1>=0:
                if dartResult[i-1] =="1":
                    result = 10
                    
            if dartResult[i+1] == "D":
                result**=2
            elif dartResult[i+1] == "T":
                result**=3
                
            score.append(result)
            tmp=0
 
        elif dartResult[i] == "*":
            if len(score) == 1:
                score[-1]*=2
            else:
                score[-2]*=2
                score[-1]*=2
                
        elif dartResult[i] == "#":
            score[-1]*=-1     
  
            
    for i in score:
        answer+=i
        
    return answer