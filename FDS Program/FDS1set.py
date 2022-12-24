U=[]
u=int(input("total no of student in class :"))
for i in range (u):
    i=i+1
    U.append(i) 
print(U)
#student who play cricket 
A=[]
a=int(input("No of student who play cricket :"))
for i in range (a):
    roll_no=int(input("Enter roll no :"))
    A.append(roll_no)
print (A)

#student who play badminton
B=[]
b=int(input("No of student who play badminton :"))
for j in range (b):
    roll_no=int(input("Enter roll no :"))
    B.append(roll_no)
print (B)
 
 #student who play football

C=[]
c=int(input("No of student who play football :"))
for k in range (c):
    roll_no=int(input("Enter roll no :"))
    C.append(roll_no)
print (C)
 


# 1] list of student who play both cricket and badminton
#INTERSECTION
AB=[]
def A_and_B ():
    for i in range (a):
        for j in range (b):
            if A[i]==B[j]:
                AB.append(A[i])
A_and_B ()
print("list of student who play both cricket and badminton :" , AB)
ab=len(AB)

# 2] list of student who play either cricket or badminton but not both 
#UNION
AoB=[]

for i in range (a):
    AoB.append(A[i])
for j in range (b):
    flag=0
    for r in range (a):
        if B[j]==A[r]:
            flag=1
            break
    if flag==0:
        AoB.append(B[j])

#print(AoB)
aob=len(AoB)

#but not both (cricket and badminton)

L=[]
for h in range (aob):
    flag = 0 
    for n in range (ab):
        if AoB[h]==AB[n]:
            flag=1
            break
    if flag==0:
        L.append(AoB[h]) 
print("list of student who play either cricket or badminton but not both" , L)        

# 3] LIST OF STUDENT WHO PLAY NEITHER CRICKET NOR BADMINTON
M=[]
for i in range (u):
    flag=0
    for j in range(aob):
        if (U[i]==AoB[j]):
            flag=1
            break
    if flag==0:
        M.append(U[i])
print("LIST OF STUDENT WHO PLAY NEITHER CRICKET NOR BADMINTON" , M)


# 4] List of student who play cricket and  football but not badminton
H=[]
for i in range (c):
    for j in range (a):
        if A[j]==C[i]:
            H.append(C[i])
#print ( H)
g=len(H)

I=[]
for i in range (g):
    flag=0
    for j in range (b):
        if H[i]==B[j]:
            flag=1
            break 
    if flag==0:
        I.append(H[i])
print("List of student who play cricket and  football but not badminton " , I)





    
