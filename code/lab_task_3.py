tc = int(input())
while tc:
    tc = tc - 1
    n = int(input())
    temp_n = n
    temp_nn = n
    sum = 0
    cnt =0
    while temp_nn:
        temp_nn = temp_nn //10
        cnt = cnt + 1
    while n:
        rem = n % 10
        sum = sum + (rem**cnt)
        n = n // 10
    if sum == temp_n:
        print(str(temp_n)+" is an Armstrong number")
    else:
        print(str(temp_n)+" is not an Armstrong number")



