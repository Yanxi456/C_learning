#include <stdio.h>
#include <math.h>

typedef struct{
		double x;
		double y;
}POINTS;
typedef struct{
		POINTS vertices[50];
		int numVertices; 
}Polygon;

double calculateDistance(POINTS p1,POINTS p2){
	return sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
}

double calculatePerimeter(Polygon poly){
	double perimeter=0.0;
	
	for(int i=0;i<poly.numVertices-1;i++){
		double edgelength = calculateDistance(poly.vertices[i],poly.vertices[i+1]);
		perimeter+=edgelength;
	} 
	
	double last = calculateDistance(poly.vertices[poly.numVertices-1],poly.vertices[0]);
	perimeter+=last;
	
	return perimeter;
}

int main(){
	Polygon poly;
	
	scanf("%d",&poly.numVertices);
	
	for(int i=0;i<poly.numVertices;i++){
		scanf("%lf %lf",&poly.vertices[i].x,&poly.vertices[i].y);
	}
	
	poly.vertices[poly.numVertices] = poly.vertices[0];
	
	double perimeter = calculatePerimeter(poly);
    printf("Perimeter: %.3lf\n", perimeter);

    return 0;
}
