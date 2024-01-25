
CC = gcc
AR = ar
OBJECTS_MAIN=main.o
OBJECTS_LIB_L= basicClassification.o advancedClassificationLoop.o
OBJECTS_LIB_R= basicClassification.o advancedClassificationRecursion.o
FLAGS= -Wall -g

# befor you run maindloop or maindrec you need to write export LD_LIBRARY_PATH=.: $LD_LIBRARY_PATH

#make all
all: libclassloops.a libclassloops.so libclassrec.a libclassrec.so mains maindloop maindrec
#make mains
mains: $(OBJECTS_MAIN) libclassrec.a 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a
#make maindloop
maindloop: $(OBJECTS_MAIN) 
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so 
#make maindrec 
maindrec: $(OBJECTS_MAIN) 
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so
#make loopd
libclassloops.so: $(OBJECTS_LIB_L)
	$(CC) -shared -o libclassloops.so $(OBJECTS_LIB_L)
#make recursived
libclassrec.so: $(OBJECTS_LIB_R)
	$(CC) -shared -o libclassrec.so $(OBJECTS_LIB_R)
# make loops
libclassloops.a: $(OBJECTS_LIB_L)
	$(AR) -rcs libclassloops.a $(OBJECTS_LIB_L)
# make recursives
libclassrec.a: $(OBJECTS_LIB_R)
	$(AR) -rcs libclassrec.a $(OBJECTS_LIB_R)
basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c -fPIC -o basicClassification.o basicClassification.c 
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c -fPIC -o advancedClassificationLoop.o advancedClassificationLoop.c 
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c -fPIC -o advancedClassificationRecursion.o advancedClassificationRecursion.c
main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c -fPIC -o main.o main.c 
#make clean
.PHONY: clean all

clean:
	rm -f *.o *.a *.so maindloop maindrec mains

