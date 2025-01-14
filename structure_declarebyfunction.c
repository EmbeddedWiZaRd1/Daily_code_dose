

#include <stdio.h>

struct stores
{
    char name[20];
    float price;
    int quantity;
};

struct stores update(struct stores product,float p,int q);

float mul(struct stores stock);

int main()
{
    float p_increment,value;
    int q_increment;
    struct stores item={"xyz",25.75,12};
    printf("\ninput increment values:");
    printf("price increment & quanity increment\n");
    scanf("%f %d",&p_increment,&q_increment);


    item = update(item,p_increment,q_increment);

    printf("updated value of item\n\n");
    printf("Name :%s\n",item.name);
    printf("price :%f\n",item.price);
    printf("quantity :%d\n",item.quantity);

    value=mul(item);

    printf("Value of the item is =%f\n",value);
    return 0;
    
}

struct stores update(struct stores product,float p,int q)
{
    product.price+=p;
    product.quantity+=q;
    return(product);
}

float mul(struct stores stock)
{
    return(stock.price * stock.quantity);
}