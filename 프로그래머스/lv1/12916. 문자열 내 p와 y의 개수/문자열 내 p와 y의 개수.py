def solution(s):
   s= s.lower()
   p,y = 0,0
   p=s.count('p')     
   y=s.count('y')     
   if(p!=y):         
        return False    
   else: return True
   return True