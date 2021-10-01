Чтобы запустить приёмник:

gcc Receiver.c -или && ./r

Чтобы отправить сигнал:

gcc emitter.c -oe && ./e СИГНАЛ ПИД-регулятора
https://github.com/nikitaVSU/OS/blob/1eb4a72ec0d47c5596e53902657312938549e9c8/Using%20signals%20to%20communicate%20between%20processes/Emitter.c
Где

PID - число, которое отображалось в консоли после запуска приёмника

СИГНАЛ - значение: (SIGUSR1 | SIGUSR2)
