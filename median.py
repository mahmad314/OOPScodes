# 2023357
# Muhammad Ahmad
def medi(data ):
    if(len(data)%2==0):
        print("____")
        return (data[(len(data)-1)//2]+(data[(len(data)//2)]))/2
    else :
        return data[(len(data))//2]    
dataset=[1,2,3,4,5,6,7,8,9,10,11,12,13,14]
print("Median is ",medi(dataset))