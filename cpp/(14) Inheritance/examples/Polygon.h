#ifndef POLYGON_H
#define POLYGON_H

class Polygon {
    public:
	int width, height; // These variables must be public so that all child-class can use it 
	void setValues (int x,int y);
  };

#endif

