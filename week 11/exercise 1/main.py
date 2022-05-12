# -*- coding: utf-8 -*-
"""
Created on Thu May 12 13:51:30 2022

@author: 110310138
"""

profilelist = []

profilelist.append('電機')
profilelist.append('一甲')
profilelist.append('110')
profilelist.append('310138')
profilelist.append('劉千榮')

print(profilelist[0], profilelist[1], end = ' ')

del profilelist[0]
del profilelist[0]

print(profilelist)

print(profilelist[2], end = ' ')

del profilelist[2]

print(profilelist)
