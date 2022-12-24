U=[]
u=int(input("How many student present for program "))
for i in range (u):
    roll=int (input("Enter  roll number of student "))
    U.append(roll)
print("roll number of student present for program ", U)



#LINEAR SEARCH (Random roll number)
print("By linear seaech")
r=int(input("Enter a roll number for search "))
flag=0
for i in range(u):
    if r ==U[i]:
        flag=1
        break
if flag==1:
    print(r,"is present for training  program ")    
else:
    print(r,"is absent for training  program ") 

#SENTINEL SEARCH
print("By sentinel seaech")
w=int(input("Enter a roll number for search "))
U.append(w)
t=len(U)

for i in range(t):
    if w ==U[i]:
        loc=i+1
        break

if loc<t:
    print(w,"is present for training  program ")    
else:
    print(w,"is absent for training  program")
del U[u]

#BINARY SEARCH ( Sorted)
print("By binary seaech")
U.sort()
# print(U)
low=0
high=u-1
flag=0
q=int(input("Enter a number for search "))
while(low<=high):
   
    mid=(low+high)//2
   
    if U[mid]==q:
           flag=1
           break
    elif(U[mid]>q):
        high=mid-1
    else:
        low=mid+1
        #i=i+1
if flag==1:
    print(q,"is present for training  program ")    
else:
     print(q,"is absent for training  program")

#fibonacci series
print("By fibonacci seaech")
U.sort()
fib=0            
fib1=1
fib2=fib+fib1

while(fib2<u):
    fib=fib1
    fib1=fib2
    fib2=fib+fib1

i=0
offset=-1
flag=0
k=int(input("Enter a roll number for search"))

while(fib2>1):
    i=min(offset+fib,u-1)
    if U[i]==k:
        flag=1
        break

    elif(k>U[i]):
        fib2=fib1
        fib1=fib
        fib=fib2-fib1
        offset=i

    elif(k<U[i]):
        fib2=fib
        fib1=fib1-fib
        fib=fib2-fib1

if flag==1:
    print(k," Present for training  program ")    
else:
     print(k,"Absent for training  program")