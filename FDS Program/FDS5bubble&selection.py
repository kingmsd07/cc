print("BUBBLE  SORT")
U=[]
u=int(input("How many elelment in list "))
for i in range (u):
    roll=int (input("Enter  element of list  "))
    U.append(roll)
print("list : ",U)

#Bubble sort 
count =0
for i in range(u-1):
     count=count+1
     print("pass ",count)
     
     for j in range(u-1):
         x=j+1
         if (U[j]>U[x]):
              U[x],U[j]=U[j],U[x]
     print(U)

# # print("----BUBBLE  SORT---")
# # count =0
# # for i in range(u-1):
# #     count=count+1
# #     print("passes are",count)
# #     j=i+1
# #     while(j<u):
# #         if(U[i]>U[j]):
# #             U[i],U[j]=U[j],U[i]
# #         j=j+1
# #     print(U)        
# # print("List after sort " , U)
print(" By selection sort")
U=[]
u=int(input("How many elelment in list "))
for i in range (u):
    roll=int (input("Enter  element of list  "))
    U.append(roll)
print("list : ",U)

#selection sort

count=0 
for i in range (u-1):
 #   small=U[i]
    x=i
    count=count+1
    print("pass ",count)
    for j in range(i+1,u):
        if (U[x]>U[j]):
           # small=U[j]
            x=j
    U[x],U[i]=U[i],U[x]
    print(U)

