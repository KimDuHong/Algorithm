using namespace std;

long long solution(int w,int h) {
    long long answer = 1;
    long long max = 0;
    long long ww = w;
    long long hh = h;
    for (long long i = ww; i > 0; i--)
    {
        if (ww%i==0 && hh%i==0)
        {
            max = i;
            break;
        }
    }
    long long count = hh / max;
    answer = ww * hh - (ww+hh - max) ;
    return answer;
}