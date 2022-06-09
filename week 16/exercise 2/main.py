import math
import random

class Location():
    
    def __init__(self):
        self.x = random.randint(0,10)
        self.y = random.randint(0,10)
        
    def move(self):
        
        return (self.x, self.y)
        
class mydata(Location):
    
    def __init__(self):
        super().__init__()
      
    def nameandID(self):
        return "Channel Liu 110310138"
    
class drugstore(Location):
    
    def __init__(self):
        super().__init__()
        
    def count(self):
        return random.randint(0,1000)
    
def Distance(s, p):
    d = math.sqrt((s[0] - p[0]) ** 2 + (s[1] - p[1]) ** 2)
    print("我與藥局間的距離", d)
    
me = mydata()
s1 = me.move()
print("消費者的資料 :", me.nameandID())
print("我的位置 :", s1)
print("\n")

drug = drugstore()
p1 = drug.move()
print("快篩剩餘數量", drug.count())
print("藥局位置 :", p1)
print("\n")
Distance(s1, p1)
