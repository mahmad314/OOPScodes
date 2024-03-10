import statistics
def mode(data ):
    
    counter=0
    counter =statistics.mode(data)    

    return counter


dataset=[1,2,3,4,4,5,6,7,8,9,10,11,12,13]
print(dataset[0])
print("Mode is ",mode(dataset))