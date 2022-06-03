num=int(input("enter the number to print multiplication tables: "))
limit=int(input("enter the ending: "))
for i in range(limit,0,-1):
    print(str(num) + "x" +str(i)  + "=" + str(i*num))
 