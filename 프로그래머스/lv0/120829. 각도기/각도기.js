function solution(angle) {
    var answer = 0;
    if (angle == 180) return 4;
        if (angle <90)
        {
            answer = 1;
        }
    else if (angle == 90)
        {
            answer = 2;
        }
    else if (angle > 90)
        {
            answer = 3;
        }
  
    return answer;
}