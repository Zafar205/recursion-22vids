x = "catec"
def palindrome_str(s):
    if len(s) <= 1:
        return True
    else:
        if s[0] != s[len(s)-1]:
            return False
        else:
            return palindrome_str(s[1:len(s)-1])

print(palindrome_str(x))        