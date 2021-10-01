#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc == 3)
  {
    // проверка на поданный сигнал, если сигнал равен SIGUSR1 или SIGUSR2, то отправляет
    if ((strcmp(argv[2], "SIGUSR1") == 0) || (strcmp(argv[2], "SIGUSR2") == 0))
    {
      // получает pid
      int pid = atoi(argv[1]);
      int sig;
      // определяет код сигнала
      if ((strcmp(argv[2], "SIGUSR1") == 0))
      {
        sig = 10;
      }
      else
      {
        sig = 12;
      }
      // отправляет сигнал
      kill(pid, sig);
      printf("Signal sended.\n");
    }
    // иначе ошибка
    else
    {
      printf("Argumets error.\n");
    }
  }
  // если больше 3-х аргументов
  else if (argc > 3)
  {
    printf("Too many arguments.\n");
  }
  // если меньше 3-х аргументов
  else
  {
    printf("Argumets error.\n");
  }
