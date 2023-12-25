a = [[1,2,3], [4,5,6], [7,8,9]]
def trace(array):
    trace = 0
    for j in range(0, len(array)):
        for k in range(0, len(array[j])):
            if j == k:
                trace += array[j][k]
    return trace

def norm(array):
    sum = 0
    for i in range(0,len(array)):
        for j in range(0, len(array)):
            sum += pow(array[i][j],2)
    return sum

def delta(array):
    return abs(norm(array) - trace(array))

print(trace(a))
print(norm(a))
print(delta(a))
