print("enter seat number (-1 to end)");
#user = input()
user = int(input())
count = 0
arr = []
mylist=[user]


for i in mylist:

    if i ==-1:
        continue
    if (i<=10):
        count =count +1
        
    print("enter the weight of the bag")
    weight = int(input())
    if (weight>10 and weight<25 ):
        extra = weight -10
        fees = extra * 5
        total = (count * 500 )+ fees
        print("The flight has" , count , "reserved seats with total income" , total ) 
    
    if (weight>=25 or weight==25 ):
        
        print("Reservation cancelled due to unallowed baggage weight")
        break
