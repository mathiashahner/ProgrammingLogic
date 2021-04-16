char * allLongestStrings(char * inputArray)
{
    int i, j=0, maxSize=0;
    char outputArray[sizeof(inputArray)];

    for (i=0; i < sizeof(inputArray); i++)
    {
        if (strlen(inputArray[i]) > maxSize)
            maxSize = strlen(inputArray[i]);
        printf("inputArray=[%zu] maxSize=[%d]\n", strlen(inputArray[i]), maxSize);
    }

    for (i=0; i < sizeof(inputArray); i++)
    {
        if (strlen(inputArray[i]) == maxSize)
        {
            printf("i=[%d] j=[%d] inputArray=[%s]\n", i, j, inputArray[i]);
            outputArray[j++] = inputArray[i];
        }
    }
    return outputArray;
}