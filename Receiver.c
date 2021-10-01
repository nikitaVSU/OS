#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <string.h>

char str[40] = "I'm waiting your signal...\n"; // строка отправляемая в консоль

// обработчик сигналов
void signalHandler(int signalCode)
{
  switch (signalCode)
  {
  case SIGUSR1:
    printf("SIGUSR1 Recieved\n");
    strcpy(str, "Last received signal is: SIGUSR1\n"); // предопределение строки, отправляемой в консоль
    break;
  case SIGUSR2:
    printf("SIGUSR2 Recieved\n");
    strcpy(str, "Last received signal is: SIGUSR2\n");
    break;
  }
}

int main()
{
  // обработка и получение сигналов
  signal(SIGUSR1, signalHandler);
  signal(SIGUSR2, signalHandler);
  printf("[ PID: %d ]: Started...\n", getpid());
  while (1)
  {
    printf("%s", str); // вывод строки
    sleep(2);
  }
  return 0;
}
