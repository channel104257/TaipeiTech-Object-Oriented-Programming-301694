k = int(input("請輸入想找質數的範圍上限 : "))
prime_list = []

def FindPrime(num):
    for i in range(2, num):
        if not prime_list:
            prime_list.append(i)
        else:
            primeFlag = 0
            for j in prime_list:
                if i % j == 0:
                    primeFlag += 1
                
            if primeFlag == 0:
                prime_list.append(i)

FindPrime(k + 1)
print("2 到", k, "共有", len(prime_list), "個質數")
print(prime_list[0:])
