#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
#include <dos.h>
#define round(val) (int)(val+0.5)

void main()
{
     int gm, gd=DETECT;
     void line_dda(int,int,int,int);
     int xa,xb,ya,yb;
     printf("Algoritmo DDA\n");
     printf("Ingrese los valores : \n"); 
     printf("X1: ");scanf("%d",&xa);
     printf("Y1: ");scanf("%d",&ya);
     printf("X2: ");scanf("%d",&xb);
     printf("Y2: ");scanf("%d",&yb); 
     initgraph(&gd,&gm,"C:\\TC\\BGI");
    //  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
     cleardevice();
     line_dda(xa,ya,xb,yb);
     getch();
     closegraph();
}

void line_dda(int xa,int ya,int xb,int yb)
{
     int Dx=xb-xa,Dy=yb-ya,steps,k;
     float xin,yin,X=xa,Y=ya;
     if(abs(Dx)>abs(Dy))
            steps=abs(Dx);
     else
            steps=abs(Dy);

     xin=Dx/(float)steps;
     yin=Dy/(float)steps;
     putpixel(round(X),round(Y),6);

     for(k=0;k<steps;k++)
     {
            X=X+xin;
            Y=Y+yin;
        putpixel(round(X),round(Y),6);
     }
}
