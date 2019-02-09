#include <stdio.h>

int main()
{
    int start, end, tempo=0;
    scanf("%d %d", &start, &end);

    if (start > end)
    {
      tempo = 24 - start;
      tempo += end;
      printf("O JOGO DUROU %d HORA(S)\n", tempo);
    } else if (end > start)
    {
        tempo = end - start;
        printf("O JOGO DUROU %d HORA(S)\n", tempo);

    } else {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;
}
