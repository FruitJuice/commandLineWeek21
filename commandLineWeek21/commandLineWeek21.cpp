#include "stdafx.h"
#include <stdio.h>
#include <stdarg.h>
#include <cstdlib>


struct patient
{
	int patientID;
	double temperature;
	int pulseRate;
	int respRate;
	int bldSystolic;
	int bldDiastolic;
};


void main(int argc, char *argv[])
{
	FILE *ptr;
	ptr = fopen("C:\\Users\\sndri\\Documents\\log.txt", "a");
	struct patient patients;
	char *date;
	char *time;
	date = __DATE__;
	time = __TIME__;
	patients.patientID = atof(argv[1]);
	patients.temperature = atof(argv[2]);
	patients.pulseRate = atof(argv[3]);
	patients.respRate = atof(argv[4]);
	patients.bldSystolic = atof(argv[5]);
	patients.bldDiastolic = atof(argv[6]);

	fprintf(ptr, "%s\t%s\t%d\t%.2lf\t%d\t%d\t%d\t%d\n",
		date,
		time,
		patients.patientID, 
		patients.temperature,
		patients.pulseRate,
		patients.respRate,
		patients.bldSystolic,
		patients.bldDiastolic);
}