student_ID = input("請輸入學號 : ")
if len(student_ID) == 9:
    dic = {}

    for i in range(0, 9): 
    
        countFlag = 0
    
        for j in range(0, 9): 
        
            if i == int(student_ID[j]):
                countFlag = countFlag + 1
            
            dic[i] = countFlag
    
    print("輸出結果 : ")

    for i in range(0, 9): 
    
        if dic[i] != 0:
            print(i, " 共出現 ", dic[i], " 次")
else:
    print("學號錯誤 !")
