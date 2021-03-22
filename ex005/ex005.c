int shapeArea(int n);

int main()
{
    int n;

    system("cls");
    printf("Enter a number for calc your area: ");
    scanf("%d", &n);

    printf("Area result = %d\n\n", shapeArea(n));

    return 0;
}

int shapeArea(int n)
{
    int result = 0;
    
    while( n > 0 )
    {
        result += (n-1) * 4;
        n--;
    }
    
    return result + 1;
}