class Solution:
    def numJewelsInStones(self, J: str, S: str) -> int:
        num=0
        list1=[x for x in J]
        for i in S:
            if i in list1:
                num+=1
        return num