/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int korean, eng, math, pe, art, sum;
    double ave;
    
    printf("국영수체미 순으로 점수를 입력하세요 :");
    scanf("%d %d %d %d %d", &korean, &eng, &math, &pe, &art);
    
    sum = korean + eng + math + pe + art;
    
    printf("과목의 합은 %d입니다\n", sum);
    
    ave = (double) sum / 5;
    
    printf("평균은 %.2lf입니다\n", ave);
    
         printf("평균을 입력하세요\n");
         scanf("%lf", &ave);
         
         if(ave < 40)
           printf("부모님 면담입니다\n");
         else if(ave < 60)
           printf("나머지 공부입니다");
         else if(ave < 80)
           printf("빽빽이 각");
         else if(ave < 90)
           printf("오답 정리");
         else
           printf("잘했습니다");
         
        

    return 0;
}
