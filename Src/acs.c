#include "acs.h"

void acs_in_result(void) {
  HAL_ADC_Start_DMA(&hadc1,(uint32_t*) &adc_data, 12);
	HAL_Delay(1000);
  HAL_ADC_Stop_DMA(&hadc1);
}

void acs_output_result (void) {
	
	SSD1306_GotoXY(70,1);
	SSD1306_Puts("ALL", &Font_16x26, 1);
	SSD1306_GotoXY(70,30);
	SSD1306_Puts("ADC", &Font_16x26, 1);
	
	for(i=0; i<12; i++) {
		if(i==0) {
			sprintf(adc_buf, "%d", adc_data[0]);
			SSD1306_GotoXY(0,0);
			SSD1306_Puts(adc_buf, &Font_7x10, 1);
		}
		else if(i==1) {
			sprintf(adc_buf, "%d", adc_data[1]);
			SSD1306_GotoXY(0,10);
			SSD1306_Puts(adc_buf, &Font_7x10, 1);
		}
		else if(i==2) {
			sprintf(adc_buf, "%d", adc_data[2]);
			SSD1306_GotoXY(0,20);
			SSD1306_Puts(adc_buf, &Font_7x10, 1);
		}
		else if(i==3) {
			sprintf(adc_buf, "%d", adc_data[3]);
			SSD1306_GotoXY(0,30);
			SSD1306_Puts(adc_buf, &Font_7x10, 1);			
		}
		else if(i==4) {
			sprintf(adc_buf, "%d", adc_data[4]);
			SSD1306_GotoXY(0,40);
			SSD1306_Puts(adc_buf, &Font_7x10, 1);			
		}
		else if(i==5) {
			sprintf(adc_buf, "%d", adc_data[5]);
			SSD1306_GotoXY(0,50);
			SSD1306_Puts(adc_buf, &Font_7x10, 1);			
		}
		else if(i==6) {
			sprintf(adc_buf, "%d", adc_data[6]);
			SSD1306_GotoXY(35,0);
			SSD1306_Puts(adc_buf, &Font_7x10, 1);			
		}
		else if(i==7) {
			sprintf(adc_buf, "%d", adc_data[7]);
			SSD1306_GotoXY(35,10);
			SSD1306_Puts(adc_buf, &Font_7x10, 1);			
		}
		else if(i==8) {
			sprintf(adc_buf, "%d", adc_data[8]);
			SSD1306_GotoXY(35,20);
			SSD1306_Puts(adc_buf, &Font_7x10, 1);			
		}
		else if(i==9) {
			sprintf(adc_buf, "%d", adc_data[9]);
			SSD1306_GotoXY(35,30);
			SSD1306_Puts(adc_buf, &Font_7x10, 1);			
		}
		else if(i==10) {
			sprintf(adc_buf, "%d", adc_data[10]);
			SSD1306_GotoXY(35,40);
			SSD1306_Puts(adc_buf, &Font_7x10, 1);			
		}
		else if(i==11) {
			sprintf(adc_buf, "%d", adc_data[11]);
			SSD1306_GotoXY(35,50);
			SSD1306_Puts(adc_buf, &Font_7x10, 1);			
		}
		else if(i==12) {
			sprintf(adc_buf, "%d", adc_data[12]);
			SSD1306_GotoXY(35,60);
			SSD1306_Puts(adc_buf, &Font_7x10, 1);			
		}
	}
}


