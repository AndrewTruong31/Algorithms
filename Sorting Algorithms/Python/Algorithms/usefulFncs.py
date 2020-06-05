
def get_int_from_file():
    file = open("data.txt", "r")

    temp = file.read()
    arr = temp.split()

    for i in arr:
        if not (i.isdigit()):
            arr.remove(i)
    arr = list(map(int, arr))
    file.close()
    return arr
