# A program to check if the a character is a Capital Letter, Small Letter,vowel,consonant, Digit or special Character .

ch = input("Enter a character: ") #character input
if((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z')): 
    print("The Given Character ", ch, "is an Alphabet") 
elif(ch >= '0' and ch <= '9'):
    print("The Given Character ", ch, "is a Digit")
else:
    print("The Given Character ", ch, "is a Special Character")
