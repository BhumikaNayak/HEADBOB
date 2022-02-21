#include<stdio.h>
int main()
{
    int Testcases; //number of Testcases
    scanf("%d\n",&Testcases);
    
    while(Testcases--)
    {
        int N,i;
        scanf("%d\n",&N);
        char ch[N];
        scanf("%s\n",&ch);
        
        for(i=0;i<N;i++)
        {
            if(ch[i]=='Y')
            {
                printf("NOT INDIAN\n");
                break;
            }
            else if(ch[i]=='I')
            {
                printf("INDIAN\n");
                break;
            }
        }
        if(i==N)
        {
            printf("NOT SURE\n");
        }
    }
    return 0;
}
//code by bhumika nayak