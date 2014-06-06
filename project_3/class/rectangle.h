#ifndef RECTANGLE
#define RECTANGLE

class rectangle{
protected:
	int width, height;
public:
	rectangle(int w, int h);
	void set_values (int wi, int he);
	int area (void);
};

#endif
