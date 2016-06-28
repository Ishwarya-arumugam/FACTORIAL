 #include<stdio.h>
     #include<conio.h>
     int main()
     {
     int a,b,c=1,i;
     clrscr();
     printf("\nEnter the number to find factorial");
     scanf("%d",&a);
     if(a<0)
     {
     printf("\nNo value");
     }
     else
     {
     for(i=1;i<=a;++i)
     {
     c*=i;
     }
     printf(" the value is %d",c);
     getch();
     }
     return 0;
     }


