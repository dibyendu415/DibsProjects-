# A program to check if the a character is a Capital Letter, Small Letter,vowel,consonant, Digit or special Character .

ch = input("Enter a character: ") #character input
flag=0
v=["a","e","i","o","u"]
ch = input("Enter a character: ") 
if ch.isupper():
        print("Uppercase Letter")
        flag=1
elif ch.islower():
        print("Lowercase letter")
        flag=1
elif ch.isdigit():
        print("Digit")
else:
        print("Special Character")
if flag :
    if ch.lower() in v:
        print("Character is a vowel")
    else:
        print("Character is a consonant")
