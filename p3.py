string=input("enter a string:")
if len (string)>1:
    new_string=string[-1]+string[1:-1]+string[0]
else:
    new_string=string
print("the new string is:",new_string)
