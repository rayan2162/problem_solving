d = int(input("Enter Days : "))
temp = d

y = d // 365
d = d % 365
w = d // 7
d = d % 7

print(str(temp) + " days = " + str(y) + " year/s, " + str(w) + " week/s, and " + str(d) + " day/s")