#include<stdio.h>
int  main()
{
    int L,W,R;
    double X,Y,A;
    scanf("%d",&L);

    A=L;

    W=(6*L)/10;
    R=(L/5);

    X=(A*45)/100;
    Y=(W*50)/100;

    printf("L=%d\n",L);
    printf("W=%d\n",W);
    printf("R=%d\n",R);

    printf("(X,Y)=((%.1lf,%.1lf)\n",X,Y);

    return 0;
}




