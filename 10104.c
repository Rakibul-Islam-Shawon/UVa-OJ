#include<stdio.h>
#include<math.h>
int Extended_Euclid(int A, int B, int *X, int *Y)
{
    int x, y, u, v, m, n, a, b, q, r;
    
    x = 1;  
    y = 0; 
    
    u = 0;  
    v = 1;  
    a = A;
    b = B;
 
    while ( b != 0 )
    {
        
        q = a / b;
 
        
        r = a % b;
        a = b;
        b = r;
        m = x - (q * u); 
        n = y - (q * v);  
        x = u;  
        y = v;  
        u = m;  
        v = n;  
    }
    *X = x;
    *Y = y;
    return a;
}

int main()
{
	int a,b,X,Y,D;
	
	while(scanf("%d %d",&a,&b)==2)
	{
		D=Extended_Euclid(a,b,&X,&Y);
		
		printf("%d %d %d\n",X,Y,D);
	}
	return 0;
}
