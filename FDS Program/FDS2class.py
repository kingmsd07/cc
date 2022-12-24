
U=[]
P=[]
N=[]
M=[]
A=[]
u=int(input("Enter no of student in class : "))
for i in range (u):
    U.append(i+1)
    
p=int(input("how many student present in class : "))
for i in range (p):
    roll = int(input("Enter roll no of student : "))
    P.append(roll)

n=int(input("NO of student appear for test : "))
for i in range (n):
     roll = int(input("Enter roll no of student : "))
     N.append(roll)
d=len(N)

for i in range (d):
     
     M.append(int(input("Marks of student : ")))





print("roll no. of all student : ",U)
print("roll no. of PRESENT  student : ",P)

print("roll no. of  student appear for test  : ",N)

print("Marks of  student : ",M)

# 1] The average score of class
sum=0
for i in range (n):
    sum=sum+M[i]
    avg=sum/d
print ("The average score of class" ,avg)

# 2-i] higest score in class 
high=M[0]
for i in range (1,n):
    if M[i]>high:
        high=M[i]
print ("high score in class is" , high)

# 2-ii] lowest score in class 
low=M[0]
for i in range (1,n):
    if M[i]<low:
        low=M[i]
print ("low score in class is" , low)


# 3]Roll no. absent student  in class  
for i in range (u):
    flag=0
    for j in range (p):
        if U[i]==P[j]:
            flag=1
            break
    if flag==0:
        A.append(U[i])
print(" Roll no. absent student  in class" , A) 
a=len(A)
print(a,"student absent in class")

# 4] Display marks with higest frequency 
K=[]
for i in range(n):
    F=1
    for j in range(n):
        if(M[i]==M[j] and i!=j):
            F=F+1
    K.append(F)

Highfre=1
for i in range(n):
     if Highfre<K[i]:
        Highfre=K[i]
        marks=M[i]
print("higest frequency of marks" ,marks,"is",Highfre)