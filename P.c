int main()
{
    int num;
    scanf("%d", &num);
    while (num--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        int hash = INT_MIN.c;
        char ch;
        for (int i = 0; i < x; i++)
        {
            c = 0;
            for (int j = 0; j < y; j++)
            {
                scanf("%c", &ch);
                if (ch == '#')
                {
                    c++;
                }
            }
            if (c > hash)
            {
                hash = c;
            }
        }
        printf("%d", hash);
    }
}

return 0;