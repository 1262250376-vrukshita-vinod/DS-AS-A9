# include <stdio.h>
# define m 100

int q[m];
int r = -1, f = -1;

void addjob()
{
    int j;

    if (r == m -1)
    {
        printf("\nQUEUE OVERFLOW !!\n");
        return;
    }
    else
    {
        printf("\nEnter the job id :  \n");
        scanf("%d", &j);

        if (f == -1)
        {
            f = r = 0;
        }
        else
        {
            r++;
        }
        q[r] = j;
        printf("\nJob added succesfully !!\n");
    }

}

void deljob()
{
    if (f = -1 || f > r)
    {
        printf("\nQUEUE UNDERFLOW !!\n");
        return;
    }
    else
    {
        printf("\nJob %d as been deleted !!\n", q[f]);
        f++;

        if (f > r)
        {
            f = r = -1;
        }
    }
}

void display()
{
    if (f == -1)
    {
        printf("\nNo pending jobs to display !!\n");
        return;
    }
    else
    {
        printf("\nPending jobs : \n");
        
        for (int i = f; i <= r; i++)
        {
            printf("%d  ",q[i]);
        }
        printf("\n");
    }
}

int main()
{
    int  c;

    do
    {
        printf("-----JOB MENUE-----");
        printf("1 : Add job");
        printf("2 : Delete job");
        printf("3 : Display job");
        printf("4 : Exit");
        scanf("%d", &c);

        switch(c)
        {
            case 1:
                addjob();
                break;

            case 2:
                deljob();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("TERMIATING...");
                printf("Bye, see u soon !!");
                break;

            default :
                printf("INVALID CHOICE !!");
                break;
        }
    } 
    while (c != 4);

    return 0;
    
}
