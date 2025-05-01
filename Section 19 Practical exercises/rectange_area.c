#include <stdio.h>



float area(float height, float width){
    float calculate_area;
      calculate_area = height *width;
      return calculate_area;
}

int main(){
    float height = 5, width = 2;
    float final_area;

    final_area = area(height, width);
    printf("Area = %.2f", final_area);
    return 0;
}