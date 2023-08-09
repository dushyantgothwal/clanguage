i=int(input("Enter number to find reverse:"))
rev=0
while (i>1):
   rev=(rev*10)+i%10
   i=i//10

   print("reverse number is:",rev)
