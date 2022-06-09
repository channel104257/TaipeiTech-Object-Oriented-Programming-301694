import guess as gs
computer = gs.figure_guess()

player = input("請輸入「剪刀」、「石頭」、「布」? ")

print("電腦出", computer)

if player == "剪刀":
    if computer == "剪刀":
        print("平手")
    elif computer == "石頭":
        print("電腦獲勝")
    elif computer == "布":
        print("玩家獲勝")
if player == "石頭":
    if computer == "剪刀":
        print("玩家獲勝")
    elif computer == "石頭":
        print("平手")
    elif computer == "布":
        print("電腦獲勝")
if player == "布":
    if computer == "剪刀":
        print("電腦獲勝")
    elif computer == "石頭":
        print("玩家獲勝")
    elif computer == "布":
        print("平手")
