studentID = input('請輸入學號 : ')

if len(studentID) == 9:
   
    weight = int(input('請輸入體重(kg): '))
    height = float(input('請輸入身高(m): '))
    print()
    
    BMI = weight / height ** 2
    print('BMI =', BMI)

    if BMI < 18:
        print('體重過輕')
    elif BMI < 24:
        print('體重正常')
    elif BMI < 27:
        print('體重過重')
    else:
        print('體重超重')
    
else:
    print('學號格式錯誤!')
