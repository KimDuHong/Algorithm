function solution(array) {
    var answer = [];
    var max = 0;
    var max_index = 0;
    for (var i = 0 ; i < array.length; i++)
        {
            if(array[i] > max)
                {
                    max = array[i];
                    max_index = i;
                }
        }
    answer.push(max);
    answer.push(max_index);
    return answer;
}