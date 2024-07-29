# 1021. Remove Outermost Parentheses
class Solution:
    def isValid(self, s):
        mapp = {
            ")" : "(" ,
            "}" : "{" ,
            "]" : "[",
        }
        
        stack = []
        for ch in s:
            if ch in "({[":
                stack.append(ch)
            else:
                if stack:
                    if stack[-1] == mapp[ch]:
                        stack.pop()
                    else:
                        return False
                    
        return len(stack) == 0

s = "{}"
now = Solution()
print(now.isValid(s))