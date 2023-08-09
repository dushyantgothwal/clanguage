num=int(input("Enter the number:"))
last=num%10
while num!=0:
  first=num%10
  num=num//10
  sum=last+first
  print("The sum of last number is:",sum)