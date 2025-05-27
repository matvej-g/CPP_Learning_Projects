#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	Sample(void);
	~Sample(void);

	static int	getNbInst(void);	//declaration of non member function

private:

	static int	_nbInst;			//declaration of non member attribute
};

#endif