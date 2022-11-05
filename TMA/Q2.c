
print("enter seat number (-1 to end)");
#user = input()
user = input
count = 0
arr = []
mylist=[user]


for i in mylist:

    if i ==-1:
        continue
    if (i<=10):
        count =count +1
        arr=True
        
        

fees = count *500
print("The flight has" , count , "reserved seats with total income" , fees )        
