all: cube tetrahedron cubeRaylib tetrahedronRaylib

cube: cube.c
	gcc cube.c -lm -o cube.out
tetrahedron: tetrahedron.c
	gcc tetrahedron.c -lm -o tetrahedron.out
cubeRaylib: cubeRaylib.c
	gcc cubeRaylib.c -lm -lraylib -o cubeRaylib.out
tetrahedronRaylib: tetrahedronRaylib.c
	gcc tetrahedronRaylib.c -lm -lraylib -o tetrahedronRaylib.out
clean:
	-rm *.out
