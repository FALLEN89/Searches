def linear_search(list,target):

 for i in range(0,len(list)):
    if list[i] == target:
      return i
    
      

def verify(i):
    if i != None:
        print ("target found at: " ,i)
    else: 
        print ("target not found")

number=[1,2,3,4,5,6,7,8,9,10]
result= linear_search(number, 12)
verify(result)

result= linear_search(number, 9)
verify(result)
