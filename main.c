#include <stdio.h>
                                                 //hello world

void main()
{
    printf("HELLO!!");

                                                //sum of 2 no.

void main()
{
    int a=4,b=6,sum;
    sum=a+b;
    printf("sum=%d",sum);
}
                                                //user input sum of 2 no.

void main()
{
    int a,b,sum;
    printf("enter the no.");
    scanf("%d",&a);
    printf("enter the no.");
    scanf("%d",&b);
    sum=a+b;
    printf("sum=%d",sum);
}
                                                 //perimeter of the rectangle

void main()
{
   int a,b,perimeter;
    printf("enter the length");
    scanf("%d",&a);
    printf("enter the width");
    scanf("%d",&b);
    perimeter=2*(a+b);
    printf("perimeter=%d",perimeter);
    
}
                                                 //area of rectangle
void main()
{
    int a,b,area;
    printf("enter the length");
    scanf("%d",&a);
    printf("enter the width");
    scanf("%d",&b);
    area=a*b;
    printf("area=%d",area);
    
}
                                                 // circle dia,circumference,area
void main()
{
    int r,dia,cir,area;
    printf("enter the radius");
    scanf("%d",&r);
    dia=2*r;
    cir=2*3.14*r;
    area=2*3.14*r*r;
    printf("dia=%d\n",dia);
    printf("cir=%d\n",cir);
    printf("area=%d\n",area);
 
 
}
                                                //length converter
void main()
{
    float a,meter,km;
    printf("enter the length in cm");
    scanf("%f",&a);
    meter=a/100;
    km=a/100000;
    printf("meter=%f\n",meter);
    printf("km=%f\n",km);

    
}
                                                //temp. converter
void main()
{
    float c,fer;
    printf("enter the tem. in cel");
    scanf("%f",&c);
    fer=32+(c*(9/5));
 printf("in F=%f",fer);    
}
                                                 //days converter

void main()
{
    float day,week,mon,year;
    printf("enter the days");
    scanf("%f",&day);
    week=day/7;
    mon=day/30;
    year=day/365;
    printf("weeks=%f\n",week);
    printf("months=%f\n",mon);
    printf("year=%f\n",year);
    
    
}
                                                 //power of no.
void main()
{
    float a,b,c;
    printf("enter the no.");
    scanf("%f",&a);
    printf("enter the order of the power");
    scanf("%f",&b);
    c= pow (a,b);
    printf("ans=%f",c);
    
}
                                                //squareroot of a no.
#include <math.h>
void main()
{
    int a,root;
    printf("enter the no.");
    scanf("%d",&a);
    root=sqrt(a);
    printf("root of the no. is%d",root);
}
                                                //3rd angle of triangle
void main()
{
    float a,b,c;
    printf("enter the 1st angle");
    scanf("%f",&a);
    printf("enter the 2nd no.");
    scanf("%f",&b);
    c=180-(a+b);
    printf("3rd angle=%f",c);
    
}
                                               //area of triangle
void main()
{
    int h,b,area;
    printf("enter the height");
    scanf("%d",&h);
    printf("enter the no. base");
    scanf("%d",&b);
    area=0.5*(b*h);
    printf("area=%d",area);
}
                                              //marks enter by the user

void main()
{
    float a,b,c,d,e,f,tot,avg,percent;
    printf("enter the marks 1");
    scanf("%f",&a);
    printf("enter the marks 2");
    scanf("%f",&b);
    printf("enter the marks 3");
    scanf("%f",&c);
printf("enter the marks 4");
scanf("%f",&d);
printf("enter the marks 5");
scanf("%f",&e);
printf("enter the total");
scanf("%f",&f);
tot=a+b+c+d+e;
avg=(a+b+c+d+e)/5;
percent=(tot/f)*100;
printf("total=%f\n",tot);
printf("avg=%f\n",avg);
printf("percent=%f\n",percent);
}






























