**СУ „Св. Климент Охридски“, ФМИ**

Специалност „Софтуерно Инженерство“

**Увод в програмирането, 2021-2022 г.**

**Задачи за домашно № 2**

1. Напишете функция ***bool** hasAlternatingBits**(**unsigned n**)***, която приема като параметър естествено число n и връща като резултат *true*, ако в двоичния запис на n няма последователни еднакви битове и *false* - в противен случай. Реализирайте програма, която изпълнява функцията *hasAlternatingBits* върху прочетено от стандартния вход естествено число и извежда на екрана резултата от изпълнението ѝ. Програмата следва да проверява въведеното от клавиатурата число за коректност, преди да го подаде на функцията.

**Пример:**

|**Вход** |**Изход** |**Обяснение**|
| :- | :- | :- |
|5|*true*|Двоичното представяне на 5 е: **101**|
|7|*false*|Двоичното представяне на 7 е: **111**|
|1|*true*|Двоичното представяне на 1 е: **1**|
|0|*true*|Двоичното представяне на 0 е: **0**|


2. Да се напише програма, която прочита от клавиатурата естествено число N [1, 109] и извежда на конзолата най-близкото до N число, което е палиндром. Ако има два равно отдалечени палиндрома, програмата да връща по-малкия.

**Уточнение:** Палиндроми наричаме числа с поне 3 цифри, които са еднакви прочетени отляво надясно и отдясно наляво. Намереният от програмата палиндром може да е както, по-голям, така и по-малък от N.

**Пример:**

|**Вход** |**Изход** |
| :- | :- |
|121|121|
|56|101|
|18595|18581|


3. Разполагате с повреден калкулатор, който има само две работещи функции: (1) да умножава по две и (2) да изважда едно. По въведени от клавиатурата начално число и окончателен резултат, изведете в конзолата най-малкият брой операции с така описания калкулатор, за които може да се достигне от началното число до окончателния резултат.

**Пример:**

|**Вход** |**Изход** |**Обяснение**|
| :- | :- | :- |
|2  3|2|Първо умножаваме по две и после намаляваме с едно (**2 -> 4 -> 3**)|
|5  8|2|Първо намаляваме с едно и после умножаваме по две (**5 -> 4 -> 8**)|
|3  10|3|Умножаваме по две, намаляваме с едно и после пак умножаваме по две (**3 -> 6 -> 5 -> 10**).|


4. Да се напише програма, която приема като вход от клавиатурата две цели числа - n и k и отпечатва в конзолата минималния брой от описаните по-долу операции, които  трябва да се приложат за да се получи k от n.
   Валидните операции са:
- Добавяне на цифра в края на числото.
- Премахване на цифра от края на числото.
- Размяна на местата на две цифри в числото.

**Пример:**

|**Вход** |**Изход** |**Обяснение**|
| :- | :- | :- |
|1234<br>43215|<p>3 </p><p>   </p>|1234 -> **4**23**1 ->** 4**32**1 -> 4321**5**|
|<p>987123</p><p>123</p>|6|987123 -> 98**3**12**7** -> 9**2**3**1**87 -> **1**23**9**87 -> 12398 -> 1239 -> 123|


5. *UNIX време* се нарича броя изминали секунди, считано от 01.01.1970. По подадено като вход число от тип *unsigned int,* което се интерпретира като брой секунди*,* да се изведат в конзолата следните данни:

**ден.месец.година час:минути:секунди**

спрямо [GMT](https://en.wikipedia.org/wiki/Greenwich_Mean_Time). За задачата не е позволено да използвате библиотеки за обработка на timestamp.

**Пояснение:** *Може да използвате следния ресурс, за да тествате решението си:  https://www.epochconverter.com/*

**Пример:**

|**Вход** |**Изход** |
| :- | :- |
|34|01.01.1970 00:00:34 |
|1234567890|13.02.2009 23:31:30 |
