
#include <stdio.h>
// Recursive function to print from N to 1
void PrintReverseOrder(int N)
{
	if (N >= 1) {
        printf("%d",N);
        PrintReverseOrder(N - 1);
    }
    else 
	{
       return;
    }
}
 int main()
{
    int N;
    scanf("%d",&N);
 
    PrintReverseOrder(N);
 
    return 0;
}
/*
output:
4
4321
*/
