a = []
size=int(input("Enter size of the list:"))
for i in range(size):
  val=int(input("Enter Number:"))
  a.append(val)
key=int(input("Enter Number to find frequancy:"))
count=0
for i in range(size):
  if(a[i]==key):
    count=count+i
  print("Frequancy",count)    
