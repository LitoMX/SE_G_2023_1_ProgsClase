

v = [
    [1,0,0],
    [1,1,1],
    [0,1,1]
]


print(v)


v.sort(key=lambda x:sum(x), reverse=True)

print(v)
