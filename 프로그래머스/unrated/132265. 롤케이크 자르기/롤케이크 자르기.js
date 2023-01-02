function solution(topping) {
  var answer = 0;
  const top1 = new Set();
  const top2 = {};
  let top2Cnt = 0;
  
  for (let i in topping)
      {
          if(top2[topping[i]])
              {
                  top2[topping[i]]++;
              }
          else { 
            top2Cnt++;
            top2[topping[i]] =1;
          }
      };
  for (let i in topping)
      {
          top1.add(topping[i]);
          top2[topping[i]] -=1;
          if(top2[topping[i]] == 0)
              {
                  top2Cnt-=1;
              }
          if(top2Cnt == top1.size)
              {
                  answer++;
              }
      }    
  return answer;
}


