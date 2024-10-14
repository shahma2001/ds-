imp_string=input("enter a string:")
first_char=imp_string[0]
result=" "
for index in range(len(imp_string)):
    if imp_string[index]==first_char and index!=0:
        result +="$"
    else:
        result +=imp_string[index]
        print(result)
