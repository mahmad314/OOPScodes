import statistics
def medi(data ):
    if(len(data)%2==0):
        print("____")
        print((data[(len(data)-1)//2]+(data[(len(data)//2)]))/2)
    else :
        print(data[(len(data))//2])    
dataset=[1,2,3,4,5,6,7,8,9,10,11,12,13]
avg=(sum(dataset)/len(dataset))
print(statistics.mean(dataset))
print(statistics.median(dataset))
print(avg)
medi(dataset)
mde=(set(dataset))
print(mde)
