#include <stdio.h>

void texto_por_parametro(char *textinho)
 {
 printf(textinho);
 }

int main()
{
 texto_por_parametro("Este texto será impresso!");
 return 0;
}
