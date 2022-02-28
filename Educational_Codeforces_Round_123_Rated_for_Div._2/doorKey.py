def verify(case:str):
    rc = reversed(case)

    count = 0

    doors = []
    for i in rc:
        if int(ord(i)) >= 65 and int(ord(i)) <= 90:
            newI = int(ord(i)) + 32
            doors.append(newI)
        else:
            if int(ord(i)) in doors:
                count = count + 1

    if count == 3:
        print("YES")
        return True
    else: 
        print("NO")
        return False



testcases = int(input())
cases = []
for i in range(0, testcases):
    cases.append(str(input()))
for i in range(0, testcases):
    verify(str(cases[i]))

