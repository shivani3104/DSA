#To create ADT that impliment the set concept 
#a. add (new element) place the value in the set 
#b.remove (element) the value 
#c. contain(element) return true if element is in collection
#d. size{return no of value in the collection iterator} return an iterator use to look over collection 
#e. intersection of two sets
#f. union of two sets
#g. difference of two sets
#h. subset 

 
class first:
    def input1(self):
        self.s1=set()
        n=int(input("Enter the size of set1 : "))
        for i in range(n):
            m=input("Enter the elements : ")
            self.s1.add(m)
        print("set elements are : ",self.s1)
    def remov1(self):
        a=input("Enter element to remove : ")
        self.s1.remove(a)
        print("The new set is : ",self.s1)
    def search1(self):
        b=input("Enter the element to search ")
        if b in self.s1:
            print("Element present")
        else:
            print("Element not present")
    def size1(self):
        print("Size of set is : ",len(self.s1))
    def intersect1(self):
        self.s2=set()
        p=int(input("Enter the size of set2 : "))
        for i in range(p):
            q=input("Enter the elements : ")
            self.s2.add(q)
        print("New set elements are : ", self.s2)
        print("Intersection of two sets are : ",self.s1.intersection(self.s2))
    def union1(self):
        print("Union two sets are : ",self.s1.union(self.s2))
    def diff(self):
        print("Difference of two sets are : ",self.s1.difference(self.s2))
    def sub(self):
        if(self.s1.issubset(self.s2)):
            print("s2 is subset of s1")
        elif(self.s2.issubset(self.s1)):
            print("s1 is subset of s2")
        else:
            print("no subsets are there")
obj=first()
obj.input1()
obj.remov1()
obj.search1()
obj.size1()
obj.intersect1()
obj.union1()
obj.diff()
obj.sub()
    
       
 
   
