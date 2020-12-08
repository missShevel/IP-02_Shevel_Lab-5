summ = 0
n = 0

for i in range(10, 10000):
  num_work = i

  if i<=99:
    n = 2
  if i>=100 and i<=999:
    n = 3
  if i>1000:
    n = 4
  
  while num_work !=0 :
    rem = num_work%10
    rem = pow(rem,n)
    summ = summ + rem
    num_work = int(num_work/10)
  
  rem = 0
  if summ == i:
    print("Armstrong's number of " + str(n) + " digits: " + str(i))
    
  summ = 0
