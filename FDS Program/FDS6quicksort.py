F=[]
a=int(input(" How many element "))
for i in range (a):
    d=int(input(" Enter percentage of student "))
    F.append(d)
print(F)

def partition(F,start,end):
    pivot=F[end]
    pindex=start
    for i  in range(start,end):
        if (F[i]<=pivot):
            F[i],F[pindex]=F[pindex], F[i]
            pindex+=1
    F[pindex],F[end]=F[end],F[pindex]      # we can write it as  also --->  F[pindex],pivot=pivot,F[pindex]
    return(pindex)

def QS(F,start,end):
    if start<end:
        pindex=partition(F,start,end)
        QS(F,start,pindex-1)
        QS(F,pindex+1,end)
QS(F,0,a-1)
print("QUICK SORT ",F)
