import numpy as np

a = np.random.random()
print(a)

x = np.ndarray(10, dtype=np.float32)
y = np.ndarray(10)

x[:] = 0.0
y[0:9] = 1.0

'''
print(len(x))
for i in range(len(x)):
    x[i] = 1.0

print(x)
'''

