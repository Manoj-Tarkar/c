#include<stdio.h>
#include<conio.h>
 
  int main()
{	
  float h,b,a;
  printf("enter triangle no");
  scanf("%f%f",&h,&b);
  a=(h*b)/2;
  printf("area the value=%2.f",a);
  return 0;
}

  int main()
{
	float a,r;
	printf("enter radius of circle and calculate area=");
	scanf("%f",&r);
	a=(3.14*r*r);
	printf("circle area the value=%f",a);
	return 0;
}
int main()
{
	int a,z;
	printf("Enter the cube.no");
	scanf("%d",&a);
	z=(a*a*a);
	printf("cube the value=%d",z);
}


  int main()
{
   float cl,p,r,t;
   printf("Enter compound interest");
   scanf("%f%f%f",&p,&r,&t);
   cl=p*(1+r)*t-p; 
   printf("compound interest%f",cl);
   return 0;
}

 int main()
{
	int m,a,b,c;
	printf("enter lower no+a=");
	scanf("%d",&a);
	printf("enter lower no+b=");
	scanf("%d",&b);
	printf("enter lower no+c=");
	scanf("%d",&c);
	m=a;
	if(b<m)
	m=b;
	if(c<m)
    m=c;
	if(m<c)
	printf("enter lower no=%d",m);
    return 0;
}
