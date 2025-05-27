#ifndef SAMPLE_STRUCT_H
# define SAMPEL_STRUCT_H

struct Sample_struct {

	int		foo;

	Sample_struct(void);
	~Sample_struct(void);

	void	bar(void) const;
};

#endif