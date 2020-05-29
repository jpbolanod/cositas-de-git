import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("datos.txt")
Y = data[:,0]
T = data[:,1]

fig=plt.figure(figsize=(8,8))
plt.scatter(T,Y,s=10)
plt.xlabel('t(s)')
plt.ylabel('Y(m)')
plt.title('Grafica posicion vs tiempo')
for x,y in zip(T,Y):

    label = "{:.2f} , {:.2f}".format(x,y)

    # this method is called for each point
    plt.annotate(label, # this is the text
                 (x,y), # this is the point to label
                 textcoords="offset points", # how to position the text
                 xytext=(0,10), # distance from text to points (x,y)
                 ha='center',fontsize=5)
plt.show()
plt.savefig("grafica_XY.pdf")