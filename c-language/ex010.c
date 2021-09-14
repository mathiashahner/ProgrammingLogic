/*
    Below we will define an n-interesting polygon. Your task is to find the area of a polygon for a given n.

    - A 1-interesting polygon is just a square with a side of length 1.
    - An n-interesting polygon is obtained by taking the n - 1-interesting polygon and appending 1-interesting polygons to its rim, side by side.
    - You can see the 1-, 2-, 3- and 4-interesting polygons in the picture below.

    *** See "example" image

    Example:
        - For n = 2, the output should be shapeArea(n) = 5;
        - For n = 3, the output should be shapeArea(n) = 13.
*/

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