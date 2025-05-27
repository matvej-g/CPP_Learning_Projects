#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:		//member, attributes and functions visible and accessable from inside the class or outside the class

	int		publicFoo;

	Sample(void);
	~Sample(void);

	void	publicBar(void) const;

private:	//member, attributes nad functions visible and accessable from inside the class only

	int		_privateFoo;

	void	_privateBar(void) const;
};

#endif