n = int(input())
arr=[]
mn = 999999999999999999

x = input()
split_x = x.split()

for i in range(n):
    arr.append(int(split_x[i]))
    if arr[i]<=mn:
        mn = arr[i]
print(mn)
