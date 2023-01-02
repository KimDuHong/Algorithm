function solution(a, b, n) {
    let getCoke = 0;
    let answer = 0;
    let remain = 0
    while(true){
        for( n ; n > 1 ; n--){
            if(n % a === 0){ 
                getCoke = (n / a)*b; // case1:10/5/2/1/1  case2:6/2/1
                answer += (n / a)*b;
                n = remain + getCoke; // case1:10/5/3/2/1   case2:8/4/2
                if(n < a){
                    break;
                }
                n++;
                remain = 0 //
        		}else{
           		 remain++
   		 }
	}
    return answer;
	}
}