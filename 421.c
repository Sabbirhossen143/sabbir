#include<stdio.h>
int main(){
int A,B,C,D,E,F,G,H,I,J;

while(scanf("%d %d %d %d",&A,&B,&C,&D)!=EOF){

    E=(A + B);
    F=(A + C);
    G=(A + D);
    H=(B + C);
    I=(B + D);
    J=(C + D);
    if(E>F && E>G && E>H && E>I && E>J)
        prinf("%d\n",E);

    else if(E<F && F>G && F>H && F>I && F>J)
        prinf("%d\n",F);
    else if(G>F && G>E && G>H && G>I && G>J)
        prinf("%d\n",G);
    else if(H>F && H>G && H>E && H>I && H>J)
        prinf("%d\n",H);
    else if(I>F && I>G && I>H && I>E && I>J)
        prinf("%d\n",I);
    else if(J>F && J>G && J>H && J>I && J>E)
        prinf("%d\n",J);


}
}
