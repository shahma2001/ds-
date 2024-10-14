l1=list(map(int,input("enter the list of integers(space_separated):").split()))
l2=list(map(int,input("enter the second list of integer(space_separated):").split()))
if len (l1)==len(l2):
    print("The two lists are of the same length")
else:
    print("The two lists are not same length")
if sum(l1)==sum(l2):
     print("The two lists sum to the same value")
else:
     print("The two lists sum is not same value")
common_values=set(l1).intersection(set(l2))
if common_values:
     print(f"common values between the list:{common_values}")
else:
     print("no common values between the list")
