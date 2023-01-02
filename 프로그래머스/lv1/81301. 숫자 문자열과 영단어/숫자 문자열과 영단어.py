def solution(s):
    answer = 0
    word = ["zero","one","two","three","four","five","six","seven","eight","nine"]
    
    for i in word:
        s= s.replace(i,str(word.index(i)))
        
    return int(s)