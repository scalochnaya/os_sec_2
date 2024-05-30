# Практическая работа №2
## по дисциплине "Безопасность операционных систем"

Запуск:
```
gcc -fPIC -c -o hello.o hello.c
gcc -shared -o libfunc.so hello.o
gcc -o test test.c
```
> Все что не работает, заработает
