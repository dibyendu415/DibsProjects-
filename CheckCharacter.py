# A program to check if the a character is a Capital Letter, Small Letter,vowel,consonant, Digit or special Character .

ch = input("Enter a character: ") #character input
x= ord(ch)

if x >=48 or x<=57:
  print("Digit")
  
elif (x>=65&&x<=90) or (x>=97&&x<=122):
  if x>=65 and x<=90:
    print("Capital Letter")
  else:
    print("Small letter:")
  
  if ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u' or ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U' :
    print(" Vowel")
  else:
    print(" Consonant")
    
else:
  print("Special Character")
