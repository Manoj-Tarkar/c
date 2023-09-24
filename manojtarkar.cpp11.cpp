
#include<stdio.h>
#include<math.h>

 int main()
 {
 int x,y;
 printf("Enter the no");
 scanf("%d%d",&x,&y);
 printf("%d",x^y);	
 }
 
 
 
 
 
   Q2. C program to enter any no and calculate its square root;
   
   int main()
   {
    double num,r;
     printf("Enter any no:");
     scanf("%lf",&num);
     
     r=sqrt(num);
     printf("%lf",r);
     return 0;
   }
   
   
   
  
   
   Q2. C program to enter two angles of a triangle and find the third angle.
   
    
    int main()
    {
    	float a,b,x;
    	printf("Enter two side put the value no");
    	scanf("%f%f",&a,&b);
       
	   x=180-(a+b);
	
	printf("Triangle of third side value=%f",x);	
	}
	
	
	
	
	
	
	 Q3. C program to enter base and height of a triangle and find its area.
	 
	 int main()
	 {
	 	int b,h,a;     // b=base, h=height  , a=area;
	  printf("Enter two put by  value=");
	  scanf("%d%d",&b,&h);
	  a=b*h;
	  printf("Area of value=%d",a); 
}


     Q4. C program to calculate area of an equilateral triangle.
     
     int main()
     {
     	float A,a,b=1.73;    // A=area
     	printf("Enter any put no=");
     	scanf("%f",&a);
     	A=(a*a)*b/4;
     	printf("Enter the area value=%f",A);
	 }
	 
	 
	 
	 
	 
	 
	 Q5. C program to enter marks of five subjects and calculate total,average and percentage.
	 
	 int main()
	 {
	 	float a,b,c,d,e,f;
	 	printf("Enter five value=");
	 	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	 	if(f=(a+b+c+d+e)/5);
	 	printf("Enter the average=%f\n",f);
	 	if(f=(a*b*c*d*e/100))
	 	printf("Enter the Percentage=%f",f);
	 }
	 
	 
	 
	 
	 
	 
	 Q6. C program to enter P,T,R and calculate Simple Interest.
	 
	 int main()
	 {
	 	float p,t,r,a;
	 	printf("Enter three value put=");
	 	scanf("%f%f%f",&p,&t,&r);
	 	a=(p*t*r)/100;
	 	printf("Enter the interest value=%f",a);
	 }
	 
	 
	 
	 
	 
	 
	 
	 Q7. C program to enter P,T,R and calculate Compound Interest.
	 
	// #include<math.h>
	 int main()
	 {
	 	float p,t,r,a,n;
	 	printf("Enter the four value=");
	 	scanf("%f%f%f%f",&p,&t,&r,&n);
	 	a=p*pow((1 + r/n),n*(t)); ;
	 	printf("Enter the Compound In=%f",a);
	 }
	 
	 
	 
	 
	 
	 
	 Q8. C program to show the working of escape characters in C programming.
	 
	 
     int main()
     {
     	
     printf("Piyush\nManoj\tTarkar\bKumar\rBaap\'ahhai\athakue");
       return 0;
}

	  
	  
	  
    Q9.Write a C program to convert a given integer (in days) to years, months and days, 
       assumes that all months have 30 days and all years have 365 days.	  
	  
	  
	 int main()
   {
   	float y,d=365,a,m,D=30;
   	printf("Enter any no=");
   	scanf("%f",&a);
  	y=a/d;
  	m=a/D;
  	
   	printf("Enter the value=%f\n",y);
   		printf("Enter the value=%f\n",m);
    return 0;
}






    Q10.Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

    int main()
   {
   float h,m,s;
   scanf("%f",&s);
   m=s/60;
   h=s/3600;
   printf("Enter the value=%f\n",m);
   printf("Enter the value=%f\n",h);
    return 0;
}













