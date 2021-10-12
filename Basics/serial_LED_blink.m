clear; clc; close all;
% Ridhwan Hossain Afridi
% Arduino Uno Code 
% Blinking serial 
a = arduino('COM3','Uno'); % Arduino object
k = 2; Blink = 0.3;
while k<=10
    if k <=9
        if k == 2
            writeDigitalPin(a,'D2',1)
            pause(Blink)
            writeDigitalPin(a,'D2',0)
            pause(Blink)
            k = k + 1;
        elseif k == 3
            writeDigitalPin(a,'D3',1)
            pause(Blink)
            writeDigitalPin(a,'D3',0)
            pause(Blink)
            k = k + 1;
        elseif k ==4
            writeDigitalPin(a,'D4',1)
            pause(Blink)
            writeDigitalPin(a,'D4',0)
            pause(Blink)
            k = k + 1;
        elseif k == 5
            writeDigitalPin(a,'D5',1)
            pause(Blink)
            writeDigitalPin(a,'D5',0)
            pause(Blink)
            k = k + 1;
        elseif k == 6
            writeDigitalPin(a,'D6',1)
            pause(Blink)
            writeDigitalPin(a,'D6',0)
            pause(Blink)
            k = k + 1;
        elseif k == 7
            writeDigitalPin(a,'D7',1)
            pause(Blink)
            writeDigitalPin(a,'D7',0)
            pause(Blink)
            k = k + 1;
        elseif k == 8
            writeDigitalPin(a,'D8',1)
            pause(Blink)
            writeDigitalPin(a,'D8',0)
            pause(Blink)
            k = k + 1;
        elseif k == 9
            writeDigitalPin(a,'D9',1)
            pause(Blink)
            writeDigitalPin(a,'D9',0)
            pause(Blink)
            k = k + 1;
        end    
    else
        k = 2;
    end
end
