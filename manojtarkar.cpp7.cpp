  #include<stdio.h>

     Q1. C program to find area to tringle using heron,s formula.
     int main()
 {
	float side1,side2,side3,s,area;
	printf("enter the lenth of 3 side of tringle\n");
	scanf("%f%f%f",&side1,&side2,&side3);

    s=((side1+side2+side3)/2);
	area=(s*(s-side1)*(s-side2)*(s-side3));
	printf("Area of tringle : %0.4f\n",area);
 }
 
 
   
   Q2.C program to find area of trapezium.
   
   int main()
   {
   	float  a,b,h,x;      // a=base ,b=base ,h=height
   	printf("enter three no:");
   	scanf("%f%f%f",&a,&b,&h);
   	
   	x=(a+b)*h/2;
   	printf("enter the trapezium value=%f",x);
   }
   
   
   
   Q3. C program to find volume of sphere.
  *
   int main()
   {
   	float r,pi=3.14,v,a;     // r=radius , v=volume;
    printf("enter any no:");
    scanf("%f",&r);
    
    a=(r*r*r);
    v=(a*pi)*4/3;
    printf("enter the volume of sphere=%f",v);
   }
   
   
   
   
   
  Q4. Write a c program to enter two no and find their sum.
  *
   int main()
   {
   	int num1,num2,sum;
   	printf("enter two no");
   	scanf("%d%d",&num1,&num2);
   	
   	sum=num1+num2;
   	printf("enter the sum value=%d",sum);
   }
   
   
   
   
   Q5. Write a c program to enter two and perform all arithmetic operations.
  
   int main()
   {
   	int a,b,c;
   	printf("enter any no");
   	scanf("%d",&c);
   	printf("enter two no");
   	scanf("%d%d",&a,&b);
   	
   	if(c==1)
	{
	    printf("enter the sum value=%d",a+b);
}
	if(c==2)
	{
	    printf("enter the sub value=%d",a-b);
}
   		if(c==3)
	{
	    printf("enter the mul value=%d",a*b);
}
     	if(c==4)
	{
	    printf("enter the divide value=%d",a/b);
}
      else
      {
      	printf("enter wrong choice no:1-4 write choice");
	  }
   }
   
   
   
   
   Q6. Write a c program to enter lenth and breadth of a rectangle and find its area.
   
   int main()
   {
   	int l,b,a;    // l=lenth,b=breadth,a=area;
   printf("enter two no :");
   scanf("%d%d",&l,&b);
   a=l*b;
   printf("enter the rectangle value=%d",a);
   }
   
   
   Q7.  Write a c program to enter lenth and breadth of a rectangle and find its perimeter.
 
   int main()
   {
   	int l,b,p;           //l=lenth,b=breadth,p=perimeter;
   	 printf("enter two no :");
   scanf("%d%d",&l,&b);
   p=2*(l*b);
   printf("enter the rectangle value=%d",p);
   }
   
   
   
   
   
    
   Q8.  Write a c program to enter radius of a circle and find its diameter, circumference and area.
   
   int main()
   {
   	int r,pi=3.14,a,d,c;      //r=radius ,d=diameter ,a=area ,c=circumference
     printf("Enter the no :");
     scanf("%d",&r);
     
     a=r*r*pi;
     printf("Enter the area value=%d\n",a);
     d=r*pi;
      printf("Enter the diameter value=%d\n",d);
     c=2*r*pi;
      printf("Enter the cirumference value=%d",c);   
   }
   
   
   
   
   Q9.  Write a c program to enter temperature in Celsius and convert it into Fahrenheit.
   
   int main()
   {
   	float f,c;   // f=Fahrenheit, c=Celsius;
   printf("enter the no");
   scanf("%f",&c);
   f=(c*9)/5+32;
   printf("%f",f);
    }
    
    
    
    
    Q10. Write a c program to enter temperature in Fahrenheit and convert it into celsius.
   
   int main()
   {
   	float f,c;   // f=Fahrenheit, c=Celsius;
   printf("enter the no");
   scanf("%f",&f);
   c=(f-32)*5/9;
   printf("%f",c);
    }
