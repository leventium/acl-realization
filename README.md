# acl-realization

## Описание
Проект представляет собой простейшую реализацию Access Control List,
реализован через единую таблицу, хранящую допуски различных entity к ресурсам.
Для быстродействия используются на hash-таблицах.


## Использование
Для использования достаточно скопировать `acl.h` в свой проект
или подключить репозиторий как подмодуль git.


## Тестирование
Для проверки работоспособности были созданы тесты с использованием doctest,
чтобы их запустить необходимо собрать проект и запустить его:
```shell
g++ --std=c++17 -o main test.cpp
./main
```