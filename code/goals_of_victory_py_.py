tc = int(input())

while tc:
    tc = tc -1
    n = int(input())
    arr = []
    x = input()
    x_split = x.split()
    sum = 0
    for i in range(n-1):
        arr.append(int(x_split[i]))
        sum = sum + arr[i]

    print(sum*-1)