# -*- coding: utf-8 -*-
"""Fibonacci.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1QBiuvhJN5gRpUaxSG8aPd4x5q9TzW99w
"""

import pandas

def Fibonacci(n): 
    if n<0: 
        print("Incorrect input") 
    elif n==1: 
        return 0 
    elif n==2: 
        return 1
    else: 
        return Fibonacci(n-1)+Fibonacci(n-2) 

count = int(input('MAXIMUM NUMBER OF n:  '))
n = 2
m = 0
print('VAL OF n   VAL OF m   VAL OF Exp   TRUE/FALSE')
while n<count:
  if (m+n)%3 ==0:
    if (m+1)<n:
      a = ((Fibonacci(n-m)*Fibonacci(n+1)) + (Fibonacci(n-m+1)*Fibonacci(n+2)))
      df = pandas.DataFrame([], columns = ["       ", "       ", "       ", "             "])
      if a %2 ==0:
        my_list = [n, m, a, "TRUE"]
        df_length = len(df)
        df.loc[df_length] = my_list
        print(df)
        del df
        m+=1
      else:
        my_list = [n, m, a, "FALSE"]
        df_length = len(df)
        df.loc[df_length] = my_list
        print(df)
        del df
        m+=1
    else:
      n+=1
      m = 0
  else:
    if (m+1)<n:
      m+=1
    else:
      n+=1

print('\n\n\n')
print('\nFinished!!!')
