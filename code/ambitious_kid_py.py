n = int(input())
arr=[]
pmn = 999999999999999999
nmn = -999999999999999999
x = input()
split_x = x.split()

z = 0

for i in range(n):
    arr.append(int(split_x[i]))
    if arr[i]==0:
        z =1
    elif arr[i]<=pmn and arr[i]>0:
        pmn = arr[i]
    elif arr[i]>=nmn and arr[i]<0:
        nmn = arr[i]
if z:
    print(0)
else:
    print(min(pmn,abs(nmn)))
