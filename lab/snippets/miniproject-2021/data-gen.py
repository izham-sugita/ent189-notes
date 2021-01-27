import numpy as np


#data for least-square
N = 10
y = np.ndarray((N))
x = np.linspace( 0.0, 10.0, num=N+1 )

d = 0.05 #percentage error from random disturbance
for i in range(N):
    dist = np.random.random()
    signal = np.random.random() - 0.5
    x[i] = x[i] + np.sign(signal)*dist*d
    y[i] = 3.0*x[i] + 4.0 + np.sign(signal)*dist*d
    print("%.4f, %.4f" %(x[i],y[i]) )

#write to file
f = open("lsmdata.txt","w")
f.write("x\ty\n")
for i in range(N):
    f.write( "%.4f %.4f\n"%(x[i], y[i]) )

f.close()

#random data for arrangement
f = open("sortdata.txt", "w")
N = 1000
for i in range(N):
    a = np.random.random()
    f.write( "%.8f\n"%(a) )

f.close()

#random matrix and vector data
N = 16
matA = np.ndarray((N,N))
vecX = np.ndarray((N))
f = open("matrixA.txt","w")
for i in range(N):
    for j in range(N):
        matA[i][j] = np.random.random()
        f.write( "%.4f "%(matA[i][j]) )
    f.write("\n")

f.close()


f = open("vecX.txt","w")
for i in range(N):
    vecX[i] = np.random.random()
    f.write("%.4f\n"%(vecX[i]) )

f.close()
