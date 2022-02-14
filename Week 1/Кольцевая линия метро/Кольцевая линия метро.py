#!/usr/bin/env python
# coding: utf-8

# In[249]:


# полное решение


# In[361]:


def numbers():
    while ValueError: 
        try:
            num = int(input())
            return num
        except ValueError:
            print("Вы ввели некорректное значение. Попробуйте снова.")


# In[362]:


print('Из скольки станций состоит линия метро? Введите число от 1 до 100')
N = numbers()
while N <= 0 or N > 100:
    print("Вы ввели значение, не удовлетворяющее указанному диапазону данных. Попробуйте снова.")
    N = numbers()

print('На какой по счету станции Вы живете? Введите число от 1 до ' + str(N))
home = numbers()
while home < 0 or N > 100:
    print("Вы ввели значение, не удовлетворяющее указанному диапазону данных. Попробуйте снова.")
    home = numbers()

print('На какой по счету станции Вы работаете? Введите число от 1 до ' + str(N))
job = numbers()
while job < 0 or N > 100:
    print("Вы ввели значение, не удовлетворяющее указанному диапазону данных. Попробуйте снова.")
    job = numbers()


# In[363]:


if job == home:
    print('Вы живете и работаете на одной и той же станции')
elif (abs(home - job) > N / 2) & (job < home):
    x = N - home + job - 1
    print('Минимальное количество станций между домом и работой: ' + str(x))
elif (abs(home - job) > N / 2) & (job > home):
    x = N - job + home - 1
    print('Минимальное количество станций между домом и работой: ' + str(x))
else:
    x = abs (home - job) - 1
    print('Минимальное количество станций между домом и работой: ' + str(x))


# In[ ]:


# короткое решение


# In[364]:


y = input()
N = int(y.split()[0])
home = int(y.split()[1])
job = int(y.split()[2]) 

if (abs(home - job) > N / 2) & (job < home):
    x = N - home + job - 1
    print(x)
elif (abs(home - job) > N / 2) & (job > home):
    x = N - job + home - 1
    print(x)
else:
    x = abs(home - job) - 1
    print(x)


# In[ ]:




