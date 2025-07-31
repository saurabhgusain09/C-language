#include<stdio.h>
int main()
{
    int costprice, sellprice, profit, loss;
    printf("enter the cost price \n");
    scanf("%d",&costprice);
    printf("enter the selling price \n");
    scanf("%d",&sellprice);
    profit= sellprice- costprice;
    loss = costprice -sellprice;
    if (costprice<sellprice)
    {
        printf("the seller has made profit of %d", profit);
    }
    else
    {
        printf("the seller has made loss of %d", loss);
    }
}