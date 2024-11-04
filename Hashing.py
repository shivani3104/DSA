tel = []
name = []
n = int(input("Enter the number of phone numbers: "))
for i in range(n):
    ni = input("Enter the name: ")
    ti = int(input("Enter the phone number: "))
    tel.append(ti)
    name.append(ni)


class Directory:
    def linear(self):
        thash = [-1 for _ in range(10)]
        nhash = [-1 for _ in range(10)]
        for i in range(n):
            a = tel[i] % 10
            if thash[a] == -1:
                thash[a] = tel[i]
                nhash[a] = name[i]
            else:
                for j in range(n):
                    t = (a + j) % 10
                    if thash[t] == -1:
                        thash[t] = tel[i]
                        nhash[t] = name[i]

        for i in range(10):
            print(i, "->", nhash[i], "::", thash[i])

    def quadhash(self):
        thash = [-1 for _ in range(10)]
        nhash = [-1 for _ in range(10)]
        for i in range(n):
            a = tel[i] % 10
            if thash[a] == -1:
                thash[a] = tel[i]
                nhash[a] = name[i]
            else:
                for j in range(n):
                    t = (a + j*j) % 10
                    if thash[t] == -1:
                        thash[t] = tel[i]
                        nhash[t] = name[i]

        for i in range(10):
            print(i, "->", nhash[i], "::", thash[i])

    def doublehash(self):
        thash = [-1 for _ in range(10)]
        nhash = [-1 for _ in range(10)]
        for i in range(n):
            a = tel[i] % 10
            if thash[a] == -1:
                thash[a] = tel[i]
                nhash[a] = name[i]
            else:
                for j in range(1, n):  # Start with step size of 1
                    t = (a + j*(7 - (tel[i] % 7))) % 10
                    if thash[t] == -1:
                        thash[t] = tel[i]
                        nhash[t] = name[i]
                        break

        for i in range(10):
            print(i, "->", nhash[i], "::", thash[i])


dir1 = Directory()
dir2 = Directory()
dir1.linear()
dir2.quadhash()
dir3 = Directory()
dir3.doublehash()
