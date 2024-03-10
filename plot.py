

from matplotlib import pyplot as plt 
p_x=[0,12,13,14,15,16,17,18,19,20,21]
p_asia=[10,40,50,42,52,60,70,80,90,75,10]
p_eu=[15,43,51,42,56,98,45,34,64,243,8]
plt.title("No of toys by age")
plt.xlabel("Ages")
plt.ylabel("No of toys ")
plt.plot(p_x,p_asia,label="Asia")
plt.plot(p_x,p_eu,color="#442343",label="Europe")
plt.legend()
plt.show()