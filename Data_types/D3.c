int add(int a)
{
    a += 1;
    return a;
}

void main()
{
    int a = 10;
    for(int i = 0; i < a; i = add(i))
        printf("%d\n", i);
}

