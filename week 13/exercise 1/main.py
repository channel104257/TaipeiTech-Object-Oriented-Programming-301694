studentID = input('請輸入學號 : ')

if int(studentID) == 110310138:
    print('本人')
elif studentID[0:7] == '1103101':
    print('同班 同系 同年級')
elif studentID[0:5] == '11031':
    print('同系 同年級')
elif studentID[0:3] == '110':
    print('同年級')
else:
    print('非同年級生')
