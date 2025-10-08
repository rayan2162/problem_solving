units = int(input("Enter total units consumed: "))

bill = 0
bill_1 = 25
bill_2 = bill_1 + 75
bill_3 = bill_2 + 120

if units <= 50:
    bill = units * 0.50
elif units <= 150:
    units = units - 50
    bill = bill_1  + (units * 0.75)
elif units <= 250:
    units = units - 100
    bill = bill_2 + (units * 1.20)
else:
    units = units - 250
    bill = bill_3 + (units * 1.50)

print("Electricity Bill = Rs.", bill)
