                                    LAB2_MCU : TIMER INTERUPT AND LED SCANNING
                                    
1. Exercise 1

    The first exercise show how to interface for multiple seven segment LEDs to STM32F103C6 micro-controller
    (MCU). Seven segment displays are common anode type, meaning that the anode of all LEDs are tied together
    as a single terminal and cathodes are left alone as individual pins.
    
    In order to save the resource of the MCU, individual cathode pins from all the seven segment LEDs are
    connected together, and connect to 7 pins of the MCU. These pins are popular known as the signal pins.
    Meanwhile, the anode pin of each seven segment LEDs are controlled under a power enabling circuit, for
    instance, an PNP transistor. At a given time, only one seven segment LED is turned on. However, if the
    delay is small enough, it seems that all LEDs are enabling.
    
    Implement the circuit simulation in Proteus with two 7-SEGMENT LEDs as following:
![image](https://user-images.githubusercontent.com/106461205/236117867-0457a46d-dc4c-4884-9fc4-831d7dda71d7.png)

2. Exercise 2
  
    Extend to 4 seven segment LEDs and two LEDs (connected to PA4, labeled as DOT) in the middle as following:
    
![image](https://user-images.githubusercontent.com/106461205/236117954-045b1f11-4eee-4c31-8187-a9b9c81d8996.png)
    
    Blink the two LEDs every second. Meanwhile, number 3 is displayed on the third seven segment and number 0 is
    displayed on the last one (to present 12 hour and a half ). The switching time for each seven segment LED is
    also a half of second (500ms). Implement your code in the timer interrupt function.

3. Exercise 3

    Implement a function named update7SEG(int index). An array of 4 integer numbers are declared in this case. 
    The code skeleton in this exercise is presented as following:
    
    const int MAX_LED = 4;
    
    int index_led = 0;
    
    int led_buffer [4] = {1 , 2 , 3 , 4};

    void update7SEG ( int index ) {
    
        switch ( index ) {
        
            case 0:
            
                // Display the first 7 SEG with led_buffer [0]
                
                break ;
                
            case 1:
            
                // Display the second 7 SEG with led_buffer [1]
                
                break ;
                
            case 2:
            
                // Display the third 7 SEG with led_buffer [2]
                
                break ;
                
            case 3:
            
                // Display the forth 7 SEG with led_buffer [3]
                
                break ;
                
            default :
            
                break ;
                
        }
        
    }

4. Exercise 4

    Change the period of invoking update7SEG function in order to set the frequency of 4 even segment LEDs to 1Hz.
    The DOT is still blinking every second.
    
5. Exercise 5
 
    Implement a digital clock with hour and minute information displayed by 2 seven segment LEDs. The code skeleton
    in the main function is presented as follows:
    
    int hour = 15 , minute = 8 , second = 50;
    
    while (1) {
      
        second ++;
        
        if ( second >= 60) {
    
            second = 0;
            
            7 minute ++;
            
        }

        if( minute >= 60) {
        
            minute = 0;
            
            hour ++;

        }
        
        if( hour >=24) {
        
        hour = 0;
        
        }
        
        updateClockBuffer () ;
        
        HAL_Delay (1000) ;
        
    }
    
    


