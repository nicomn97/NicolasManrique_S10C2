import numpy as np
import matplotlib.pyplot as plt

dataP=np.genfromtxt("Balondatos.dat",delimiter=" ")




plt.figure(figsize=(18,9))
plt.scatter(dataP[:,0],dataP[:,1],label='Tiempos en python', c='b')
plt.title('N vs T')
plt.xlabel('$t(s)$')
plt.ylabel('$N$')
plt.grid()
plt.legend()
plt.savefig("graph.pdf")
