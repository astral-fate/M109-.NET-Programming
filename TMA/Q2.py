
extra =0
fees = 0
total = 0
count =0
i =0
tiket = 500
arr = [False] * 10  

while(True):
    print("enter seat number (-1 to end):");
    user = int(input())
    mylist=[user]


    if user ==-1:    
        break
  
    if (user>10):
        break  
     
    for i in mylist:
        
                
        if arr[user-1] != True:
            arr[i-1] = True
            
        elif arr[user-1] == True:
             print("Reservation cancelled due to unavailable seat number")
             break
    
        if (i<=10):
            count =count +1

        
        print("enter the weight of the bag:")
        weight = int(input())
        
        if (weight==10 or weight<=10):
         extra = 0
         total = (count * tiket ) 
         print("Reservation is confirmed for seat no. ", i)
         print("Fees of extra weight:", fees, "$")
         print("Total fees: ", total ,"$")
        
        

        if (weight>10 and weight<25 ):
         extra = weight -10
         fees = extra * 5
         total = (count * tiket )+ fees
        
        
         print("Reservation is confirmed for seat no. ", i)
         print("Fees of extra weight:", fees, "$")
         print("Total fees: ", total ,"$")
        
        
        
        elif (weight>=25 or weight==25 ):
        
         print("Reservation cancelled due to unallowed baggage weight")
         count =count-1
         
         
             

print("The flight has" , count , "reserved seats with total income" , total )
