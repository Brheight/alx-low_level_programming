#define _putchar(x) putchar(x)

int main(void)
{
    char filename[] = __FILE__;
    int i = 0;

    while (filename[i] != '\0')
    {
        _putchar(filename[i]);
        i++;
    }
    _putchar('\n');

    return 0;
}
