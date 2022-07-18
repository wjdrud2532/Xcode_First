#include <stdio.h>
#include <stdlib.h>
int M, N, r = 2500;
char s[51][51];
int main()
{
    scanf("%d%d", &N, &M);
    for (int i = 0; i < N; ++i)
        scanf("%s", s[i]);

    for (int i = 0; i < N - 7; ++i)
    {
        for (int j = 0; j < M - 7; ++j)
        {


            int a = 0, b = 0;
            for (int x = 0; x < 8; ++x)
                for (int y = 0; y < 8; ++y)
                {
                    if ((x + y) % 2)    //짝수일 때
                        a += s[i + x][j + y] == 'B';        //상대적인 좌표가 B라면
                    else
                        b += s[i + x][j + y] == 'B';
                }
            a = 32 - abs(a - b);
            if (r > a)
                r = a;
        }
    }
    printf("%d", r);
}