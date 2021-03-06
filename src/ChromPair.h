/*
 * ChromPair.h
 *
 *  Created on: Sep 26, 2014
 *      Author: xiong_yang
 */

#ifndef CHROMPAIR_H_
#define CHROMPAIR_H_

#include <vector>
#include "Chrom.h"

using namespace std;

class ChromPair {
private:
	Chrom chrom1;
	Chrom chrom2;
	int getPoissonNumb(double) const;
	void breakPoints(double[], int);
public:
	ChromPair();
	ChromPair(const Chrom &, const Chrom &);
	Chrom getChrom(int) const;
	//double waitTime();
	//void sort(double[], int);
	ChromPair & recombine();
	virtual ~ChromPair();
};

#endif /* CHROMPAIR_H_ */
