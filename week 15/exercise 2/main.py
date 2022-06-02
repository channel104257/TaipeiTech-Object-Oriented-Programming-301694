def gcd(m, n):
    if n % m == 0:
        return m
    else:
        return gcd(n % m, m)
    
m = int(input("請輸入 m 值 : "))
n = int(input("請輸入 n 值 : "))
ans = gcd(m, n)

print(m, "與", n, "的最大公因數為", ans) 
