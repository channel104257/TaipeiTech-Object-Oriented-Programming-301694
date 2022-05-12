# -*- coding: utf-8 -*-
"""
Created on Thu May 12 14:12:10 2022

@author: 110310138
"""

people = {'01':'王大明', '02':'蔡曉慧', '110310138':'劉千榮'}

print('可輸入的學號： dict_key(', end = ' ')

for key, value in people.items():
  print(key, end = ' ')
  
print(')')
    
number = input('請輸入查詢學號：')
print('對應名稱為：', people.get(number, '字典找不到該學號'))
