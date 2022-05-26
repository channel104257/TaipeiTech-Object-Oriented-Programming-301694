APR = int(input("請輸入年利率(%) : "))
deposit = int(100000)
target = int(110310138)
countFlag = int(0)

while deposit <= target:
    deposit = deposit * (1 + APR / 100)
    countFlag = countFlag + 1
    
print("第", countFlag, "年後本利和為", deposit, "超過", target)
