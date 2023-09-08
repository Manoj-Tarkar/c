#include<stdio.h>
#include<conio.h>
 
 int main()
 { 	
   float r,h,a,b,pi=3.14,ch;
	printf("enter the value");
	scanf("%f",&ch);
	printf("enter the value r="); 	
	scanf("%f",&r);
    printf("enter the value h=");
    scanf("%f",&h);
	printf("enter the value a=");
	scanf("%f",&a);
    printf("enter the value b=");
    scanf("%f",&b);
   if(ch==1)
   {
   b=(pi*r*h)*r;
    printf("enter the cylinder=%f",b);
	}
	 	  else	 if(ch==2)
 			{
 				a=(r*h)/2;
 				printf("enter the tringle=%f",a);
			 }
			else if(ch==3)
			 {
			 	b=a*a;
			 	printf("enter the square=%f",b);
			 }
			else  if(ch==4)
			 {
			 	a=(pi*r)*r;
			 printf("enter the circle=%f",a);	
			 }
			 else if(ch==5)
			 {
			 	a=b*h;
			 	printf("enter the rectangle=%f",a);
			 }
			 else 
			 ("enter the wrong value");
		 }
		 
		 
		 
		 
		 int main()
		 {
		 	int x,y,z;
		 	printf("enter the value x=");
		 	scanf("%d",&x);
		 	printf("enter the value y=");
		 	scanf("%d",&y);
		 	z=x;
		 x=y;
		 	y=z;
		 	printf("enter the x=%d\n",x);
		 	printf("enter the y=%d",y);
		 	
		 }
 
