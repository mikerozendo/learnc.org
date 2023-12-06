	#include <stdio.h>

    //Link to exercise: https://www.learn-c.org/en/Multidimensional_Arrays

	int main() {
		int grades[2][5] = 
        {
            {80,70,65,89,90},
            {85,80,80,82,87}
        };


		for (int i = 0; i < 2; i++) {
			float average = 0;
			for (int j = 0; j < 5; j++) {
				average += grades[i][j];
			}

			printf("The average marks obtained in subject %d is: %.2f\n", i, (average/5));
		}

		return 0;
	}