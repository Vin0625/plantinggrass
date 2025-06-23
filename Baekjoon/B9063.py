#9063
n = int(input())
x_coords = []
y_coords = []

for _ in range(n):
    x, y = map(int, input().split())
    x_coords.append(x)
    y_coords.append(y)

width = max(x_coords) - min(x_coords)
height = max(y_coords) - min(y_coords)
print(width * height)
