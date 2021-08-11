width = int(input())
length = int(input())
ans = 0

def q1(width,length):
    if width%2 == 0:
        ans = width/2 * length
        return ans

    if(length%2==0):
        ans = length/2 * width
        return ans

    else:
        return q1(width,length-1)+(width-1)/2

print(int(q1(width,length)))

