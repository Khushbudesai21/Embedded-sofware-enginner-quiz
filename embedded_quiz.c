#include <stdio.h>
#include <math.h>

void checksquare(int);

void main()
{
   int m, n,s,x;
   printf("Enter the dimension of the paper M and N");
   scanf("%d %d",&m,&n);
   x = m*n;
   checksquare(x);
}

void checksquare(int s)
{
   int originalvalue= s;
   while (s > 0){
      float sq_root= sqrt(s);
      if(fmodf(sq_root, floor(sq_root))==0)
      {
         printf("%0.0f X %0.0f ", sqrt(s), sqrt(s));
         s = originalvalue - s;
         originalvalue= s;
      }
      else 
      {
         s--;
      }  
   }
}  
