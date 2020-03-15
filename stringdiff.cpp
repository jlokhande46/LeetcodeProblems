class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        s1=0
        s2=0
        for i in s:
          s1=s1+ord(i)
        for i in t:
          s2=s2+ord(i)
        return chr(s2-s1)