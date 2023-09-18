
#include<stdio.h>
 main()
{
	printf("Hello World!");
}
   
 
   
 Q2. C program to printf an integer(Entered by the User)?
   
   int main()
{
	int a;
	printf("enter integer no");
	scanf("%d",&a);
}
    
    
   Q3. C program to printf Add Two integers.
     
     int main()
{
    int a,b;
	  printf("Enter two no:");
	  scanf("%d%d",&a,&b);
	  
	  printf("enter add to value=%d",a+b);
}



    Q4. C program to Multiply Two Floating-Point No.
	  
	  int main()
	  {
	  	float a,b;
	  	 printf("Enter two no:");
	  	 scanf("%f%f",&a,&b);
	  	 printf("Enter mul value from user=%f",a*b);
		}  
		
		
	
		
	Q5. C program to Find ASCII Value of a Character,
		 
		 int main()
		 {
		 	char a;
		 	printf("Enter ASCII value:");
		 	scanf("%c",&a);
		 	printf("enter character value=%d",a);
			 
		 }
		
		
		
		
		
   Q.6 C program to computer Quotient and Remainder......
	 
	 int main()
	 {
	 	int a,b,c,d;
	 	printf("Enter two no");
	 	scanf("%d",&a);
	 	c=a/2;
	 	b=d%a;
	 	printf("Enter Quotient value=%d\n",c);
	 	printf("Enter Remainder=%d",b);
	 }
	 
	 
	 
	 
	Q7. C program to Find the Size of int,float,double and char.
	  
	  int main()
	  {
	  	int a;
	  	float b;
	  	double c;
	  	char  d;
	  	printf("%d\n",sizeof(a));
	  	printf("%d\n",sizeof(b));
	  	printf("%d\n",sizeof(c));
	  	printf("%d\n",sizeof(d));
	  }
	  
	  

	  
	Q8. C program to Demonstrate the Working of Keyword long.
	   
	   int main()
	   {
	   	int a;
	   	double  b;
	   	long c;
		long long d;
		long double e;
		
		printf("%d\n",sizeof(a));
		printf("%d\n",sizeof(b));
		printf("%d\n",sizeof(c));
		printf("%d\n",sizeof(d));		
		printf("%d",sizeof(e));
	   }
	   
	   
	   
	Q9. C program to Swap Two no.
	   
	   int main()
	   {
	   	int x,y,z;
	   	printf("Enter Two no:");
	   	scanf("%d%d",&x,&y);
	   	z=x;
	   	x=y;
	   	y=z;
	   	printf("Enter the swap value=%d\n",x);
	   	printf("Enter the swap value=%d\n",y);
	   }
	   
	   
	   
	   Q10. C program to solve area of square.
	    
	    int main()
	    {
	    	int a,b;
	    printf("enter any no:");
	    scanf("%d",&a);
	    b=a*a;
	    printf("enter the square value=%d",b);
		
		return 0;
		}
		
		
