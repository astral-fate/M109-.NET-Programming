print("enter seat number (-1 to end)");
#user = input()
user = 3
count = 0
arr = []
mylist=[user]


for i in mylist:

    if i ==-1:
        continue
    if (i<=10):
        count =count +1
        arr=True
    print("enter the weight of the bag")
    weight = 15
    if (weight>10):
        extra = weight -10
        sum = extra * 5
        

fees = count *500
print("The flight has" , count , "reserved seats with total income" , fees+sum )        
print("the extra fee is:", sum)
