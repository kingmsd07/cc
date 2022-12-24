
#matrix
r = int(input("Enter total number of rows "))
c = int(input("Enter total number of coloumn "))



m1=[]
for i in range(r):
    sub=[]
    for j in range(c):
        no1=int(input("Enter a number "))
        sub.append(no1)
    m1.append(sub)   
print("First matrix is " ,m1)     

r = int(input("Enter total number of rows "))
c = int(input("Enter total number of coloumn "))

m2=[]
for s in range(r):
    sub2=[]
    for f in range(c):
        no2=int(input("Enter  number for second matrix "))
        sub2.append(no2)
    m2.append(sub2)   
print("Second matrix is " ,m2) 

# #Addition of two matrix
# add=[]
# for i in range (r):
#     sub1=[]
#     for j in range (c):
#         a = m1[i][j]+m2[i][j]
#         sub1.append(a)
#     add.append(sub1)
# print("Addition of matrix is " , add)

# #Subtraction of two matrix
# subtra=[]
# for i in range (r):
#     sub3=[]
#     for j in range (c):
#         b = m1[i][j]-m2[i][j]
#         sub3.append(b)
#     subtra.append(sub3)
# print("substraction of matrix is " , subtra)




# #transpose  of matrix
# trans=[]
# for i in range (r):
#     sub4=[]
#     for j in range (c):
#         a=m1[j][i]
#         sub4.append(a)
#     trans.append(sub4)
# print("transpose  of matrix is m1 is  " , trans)




mul=[]
for i in range (r):
    sub4=[]
    for j in range (c):
        sum=0
        for k in range (r):
             b = m1[i][k]*m2[k][j]
             sum=sum+b
        sub4.append(sum)
    mul.append(sub4)
print("Multiplication of matrix is " , mul)