# chapter 3 computer science with python DATA HANDLING
import pickle
def Createfile():
    f=open("Book.dat","wb")
    while True:
        no=int(input("Book no:"))   
        name=input("Book_name:")
        author=input("author:")
        price=int(input("price:"))
        data=[no,name,author,price]
        pickle.dump(data,f)#DUMP function is used
        ch=input("More?(Y/n)")#so we have to prompt the user by this command
        if ch in'Nn':
            break
    f.close()   
    def CountRec():
        f=open("Book.dat","wb")
        author=input("author:")
        while True:
            data=pickle.load(f )
            print(data)
            
        f.close()
        
    
Createfile()
    
        
             
        
