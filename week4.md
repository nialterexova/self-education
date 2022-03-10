## ТЕМА
	• Основы криптографии
	• Массивы и линейный поиск
	• Аргументы функции main
	• Рандом


## ТЕОРИЯ
1) CS50. Лекция 6
(об основах криптографии, массивах и аргументах командной строки)

Источник <https://habr.com/ru/company/vertdider/blog/403823/> 

**Лекция 5**
- ~~00:00 Представляем ассистента Роба Боудена. «Вертикальный» Дэвид Малан.~~
- 03:50 Представление данных. Криптография.
- ~~05:00 Эпизод из Рождественской истории~~
- 08:00 Ещё немного о строках.
- 15:08 Массивы.
- 27:17 Аргументы командной строки.
- 45:52 Анонс задач второй недели: шифрование.

 
Закрепить: 
- http://cppstudio.com/post/421/
- https://www.sites.google.com/site/kriptografics/sifr-cezara
- https://www.sites.google.com/site/kriptografics/sifr-vizenera


2) Яндекс алгоритмы ДО 51:30 (ответы на вопросы по желанию)
https://www.youtube.com/watch?v=SKwB41FrGgU&list=PL6Wui14DvQPySdPv5NUqV3i8sDbHkCKC5&index=3

3) Рандомность
- https://pikabu.ru/story/generatsiya_sluchaynyikh_chisel__kak_iz_strogosti_rozhdaetsya_khaos_6141648
- https://youngcoder.ru/lessons/4/sluchainie_chisla_na_c.php


## ЗАДАНИЕ

1) Известно количество осадков (в миллиметрах), выпавших в Москве каждый год в течение N лет (задать рандомно в диапазоне), количество ни разу не было менее 400 и не более 800, шаг округления равен 10. Вычислить среднее количество осадков, отклонение от среднего для каждого года и кол-во лет больше и меньше среднего.
2) Написать шифр Цезаря. Вот что вам нужно сделать:
- Получить ключ
- Получить текст
- Зашифровать
- Вывести на экран зашифрованное сообщение
![image](https://user-images.githubusercontent.com/34689920/157686411-df686a78-9f43-470a-b086-0653afcbf4b7.png)
![image](https://user-images.githubusercontent.com/34689920/157686932-9277c9be-0261-459b-91e8-701f53ac1892.png)

Пригодится: 
![image](https://user-images.githubusercontent.com/34689920/157686707-d4b8cbff-5ada-44f4-8caa-d485526170a2.png) 

Функция для получения строки из консоли (вместо библиотеки cs50)

```
#include <malloc.h>

char *getStringFromConsoleInput();

int main(int argc, char **argv) {
    char *str = getStringFromConsoleInput();  //строка для считывания массива char и сохранение в переменную str 
    return 0;
}

char *getStringFromConsoleInput() {
    char c;                
    int count;
    char *arr = NULL;
    c = getchar();         
    count = 0;
    while (c != '\n') {
        arr = (char*)realloc(arr, (count + 1) * sizeof(char));
        arr[count] = c;
        ++count;
        c = getchar();
    }
    return arr;
}
```

3) Шифр Виженера. 
![image](https://user-images.githubusercontent.com/34689920/157689919-8e7b7875-118b-4a70-beb6-a960a9ce9e61.png)
![image](https://user-images.githubusercontent.com/34689920/157690061-9dbe4c04-6123-4981-8c44-ced136b3ac2d.png)
![image](https://user-images.githubusercontent.com/34689920/157690136-5953a8d9-2da6-4345-ae50-fdab15b1b0e6.png)
![image](https://user-images.githubusercontent.com/34689920/157690229-2b6572bb-673b-490d-919e-c26f84bfb847.png)
![image](https://user-images.githubusercontent.com/34689920/157690359-e05669df-2a6f-4a7f-a684-30c895af7c00.png)
![image](https://user-images.githubusercontent.com/34689920/157690409-f9d8b485-e44f-4412-a46d-b2d987d20c27.png)

4) https://contest.yandex.ru/contest/28738/problems/B/
