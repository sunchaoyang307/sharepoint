#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char*argv[])
{
    int i=0;
    int s=0,e=0;

    s=atoi(argv[1]);
    e=atoi(argv[2]);

    if(s<=0||s>20)s=5;
    if(e<=0||e>20)e=20;

    for(i=s;i<=e;i++)
    {
        printf("\n \
WHILE(STOP == 0 AND MEET == 0) \n \
{ \n \
    N=N+1; \n \
    BX=BX+B%d; \n \
    AVG=BX/N; \n \
 \n \
    IF(ABS(A%d) > DAYJ1) \n \
    { \n \
        STOP=1; \n \
        InLoop:A%d; \n \
        FailInLoop:%d; \n \
    } \n \
    IF(ABS(B%d-AVG)/AVG > DAYJ2) \n \
    { \n \
        STOP=1; \n \
        OutLoop:ABS(B%d-AVG)/AVG; \n \
        FailOutLoop:%d; \n \
    } \n \
    IF(N<=NCOUNT) \n \
    { \n \
        FailInExitNCount:N; \n \
        BREAK; \n \
    } \n \
    IF(A%d>0 AND A%d>DAYJX) \n \
    { \n \
        STOP=1; \n \
        IF(A%d>0 AND A%d>DAYJY) \n \
        { \n \
            MEET=1; \n \
        } \n \
        ELSE \n \
        { \n \
            FailExitStep2:%d; \n \
            InLoop:A%d; \n \
        } \n \
    } \n \
    ELSE \n \
    { \n \
        FailExitStep1:%d; \n \
        InLoop:A%d; \n \
    } \n \
    BREAK; \n \
} \n \
"
,i,i,i,i,i,i,i
,i+1,i+1
,i+2,i+2,i+2,i+2
,i+1,i+1
);
    }
    return 0;
}
