"""
EVANGELINE REBELLO
SE A 55

Assignment 2 Practice problem 1 :
Check given string is palindrome or not and Calculate complexity of it

"""

#Check if Palindrome
def isPalindrome(s):
    s==s.upper()
    return s==s[::-1]

def palindrome(s):
    ans=isPalindrome(s)
    if ans:
        print("Yes")
    else:
        print("No")

s=input("Enter the string : ")
palindrome(s)
