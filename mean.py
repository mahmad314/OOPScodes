# 2023357
# Muhammad Ahmad
def mean(data ):
    sum=0
    for  i in range(len(data)):
        sum+=data[i]
    mean=sum/len(data)
    return mean    

dataset=[1,2,3,4,5,6,7,8,9,10,11,12,13,14]
print("Mean  is ",mean(dataset))