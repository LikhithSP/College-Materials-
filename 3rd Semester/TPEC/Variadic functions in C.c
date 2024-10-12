int  sum (int count,...)
{
va_list args;
    int sum = 0;

    va_start(args, count);
    for (int i = 0; i < count; i++)
    {
        sum += va_arg(args, int);
    }
    va_end(args);

    return sum;
}

int min(int count,...)
{
va_list args;
    int min;
    
    if (count <= 0) return 0; 

    va_start(args, count);
    min = va_arg(args, int); 

    for (int i = 1; i < count; i++)
    {
        int current = va_arg(args, int);
        if (current < min)
        {
            min = current;
        }
    }
    va_end(args);

    return min;
}

int max(int count,...)
{
va_list args;
    int max;
    
    if (count <= 0) return 0; 

    va_start(args, count);
    max = va_arg(args, int); 

    for (int i = 1; i < count; i++) 
    {
        int current = va_arg(args, int);
        if (current > max) 
        {
            max = current;
        }
    }
    va_end(args);

    return max;
}
