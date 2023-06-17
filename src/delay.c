void Delay(unsigned int x)
{
    while (--x)
    {
        unsigned char i, j;

        i = 2;
        j = 199;

        do
        {
            while (--j);
        } while (--i);
    }
}