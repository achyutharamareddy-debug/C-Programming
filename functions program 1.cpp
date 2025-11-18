# include<stdio.h>
    int addition( int a, int b);
       int  main()
       {
        int a ,b ,result;
        printf("\n enter a and b values");
        scanf("%d%d",&a,&b);
            result= addition(a,b);
          printf("%d", result);
            return 0;
        }
        int addition( int a,int b)
        {
        	int c;
        	c=a+b;
        	return c;
		}
