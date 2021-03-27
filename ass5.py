def accept_array(A):
    n=int(input("Enter the total number of students"))
    print("Input percentage of the students")
    for i in range(n):
        per=float(input("Enter percentage %d : "%(i+1)))
        A.append(per)
    print("Student percentage accepted successfully\n\n")
    return n

def display_array(A,n):
    if(n==0):
        print("\nNo records in the database ")
    else:
        print("Students percentage list : ")
        for i in range(n):
            print("\t Percentage",i+1,":",A[i],"%")
        print("\n")

def bubbleSort(A,n):
    for i in range(n-1):
        flag=0
        for j in range(0,n-i-1):
            if A[j]>A[j+1]:
                A[j],A[j+1]=A[j+1],A[j]
                flag=1
        if flag==0:
            break

def SelectionSort(A,n):
    for i in range(n-1):
        minpos=i
        for j in range(i+1,n):
            if A[j]<A[minpos]:
                minpos=j
        if minpos!=i:
            A[i],A[minpos]=A[minpos],A[i]

def bubbleSortTop(A,n):
    for i in range(5):
        flag=0
        for j in range(0,n-i-1):
            if A[j]>A[j+1]:
                A[j],A[j+1]=A[j+1],A[j]
                flag=1
        if flag==0:
            break
    print("Top 5 scores are : ")
    count=0
    for i in range(n-1,-1,-1):
        count+=1;
        print("\t Rank",count,":",A[i],"%")

def Main():
    A=[]
    while True:
        print("\t1 : Accept & Display Students info ")
        print("\t2 : Bubble Sort")
        print("\t3 : Selection Sort")
        print("\t4 : Display top 5 scores")
        print("\t5 : exit")
        ch = int(input("Enter your choice "))
        if(ch==5):
            print("End of Program")
            quit()
        elif(ch==1):
            A=[]
            n= accept_array(A)
            display_array(A,n)
        elif(ch==2):
            print("Sorting the array in ascending order using Bubble Sort")
            bubbleSort(A,n)
            display_array(A,n)
        elif(ch==3):
            print("Sorting the array in ascending order using Selection Sort")
            bubbleSort(A,n)
            display_array(A,n)
        elif(ch==4):
            print("Top five scores are : ")
            bubbleSortTop(A,n)
        else:
            print("Wrong choice entered!! Try again")

Main()
