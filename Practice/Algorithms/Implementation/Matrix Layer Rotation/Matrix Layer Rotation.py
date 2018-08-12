# input
M, N, rotations = map(int, input().split())
matrix = []
for row in range(M):
    matrix.append(list(map(int, input().split())))

# flatten the rings into a list
layers = int(min(N, M)/2)
ring = [[] for layer in range(layers)]

for level in range(layers):
    top = (N-1) - 2 * level
    side = (M-1) - 2 * level
    for row in range(top):  # right
        ring[level].append(matrix[level][level + row])
    for col in range(side):  # down
        ring[level].append(matrix[level + col][level + top])
    for row in range(top):  # left
        ring[level].append(matrix[level + side][level + top - row])
    for col in range(side):  # up
        ring[level].append(matrix[level + side - col][level]) 

# rotate each layer
for level in range(layers):
        r = rotations % len(ring[level])
        ring[level] = ring[level][r:] + ring[level][:r]

# fill the array with the rotated elements
for level in range(layers):
    top = (N-1) - 2 * level
    side = (M-1) - 2 * level
    for row in range(top):
        matrix[level][level + row] = ring[level].pop(0)  # right
    for col in range(side):
        matrix[level + col][level + top] = ring[level].pop(0)  # down
    for row in range(top):
        matrix[level + side][level + top - row] = ring[level].pop(0)  # left
    for col in range(side):
        matrix[level + side - col][level] = ring[level].pop(0)  # up

# print the rotated matrix
for row in range(M):
    for col in range(N):
        print(matrix[row][col], "", end="")
    print()