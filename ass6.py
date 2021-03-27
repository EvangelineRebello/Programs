import math
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

def InsertionSort(A,n):
    for i in range(1,n):
        element=A[i]
        j=i
        while j>0 and A[j-1]>element:
            A[j]=A[j-1]
            j=j-1
        A[j]=element

def ShellSort(A,n):
    gap=int(n/2)
    while gap>0:
        for i in range(gap,n):
            temp=A[i]
            j=i
            while j>=gap and A[j-gap]>temp:
                A[j]=A[j-gap]
                j-=gap
            A[j]=temp
        gap=int(gap/2)

def Top(A,n):
    ShellSort(A,n)
    print("Top 5 scores are : ")
    count=0
    for i in range(n-1,-1,-1):
        count+=1;
        print("\t Rank",count,":",A[i],"%")

def Main():
    A=[]
    while True:
        print("\t1 : Accept & Display Students info ")
        print("\t2 : Insertion Sort")
        print("\t3 : Shell Sort")
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
            InsertionSort(A,n)
            display_array(A,n)
        elif(ch==3):
            print("Sorting the array in ascending order using Selection Sort")
            ShellSort(A,n)
            display_array(A,n)
        elif(ch==4):
            print("Top five scores are : ")
            Top(A,n)
        else:
            print("Wrong choice entered!! Try again")

Main()
