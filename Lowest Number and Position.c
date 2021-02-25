int main()
{

    int n,a[1000],i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int small = a[0],position=0;
    for (i=1; i<n; i++)
    {
        if(small<a[i])
        {
            small = small;
            position = position;
        }
        else
        {
         small = a[i];
         position = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",small,position);

    return 0;
}
