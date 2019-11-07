vals =  [x for x in range(31)]


for i in range(len(vals)):
    if vals[i] % 3 == 0 and vals[i] % 5 == 0:
        vals[i] = "Fizz Buzz"
    elif vals[i] % 3 == 0:
        vals[i] = "Fizz"
    elif vals[i] % 5 == 0:
        vals[i] = "Buzz"


print(vals)