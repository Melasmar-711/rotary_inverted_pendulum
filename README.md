# rotary_inverted_pendulum
 lqr control over rotary inverted pendulum



[<img src="https://img.youtube.com/vi/KOM0r-w6caM/hqdefault.jpg" width="600" height="300"
/>](https://www.youtube.com/embed/KOM0r-w6caM)


# Description
lqr control method used to control a Futura inverted pendulum . modeled , simulated and tested in real life

# usage
- download the zip file
- add to your MATLAB path
- run all2datafile.m 
- add motor_parametrs.mat to your workspace which were estimated using the motor parameters folder
- run mod_lin.m file to linearize the pyhsical model on simscape
- run lqr.m
- run simulink simulation
# adding your own physical model to the system
- download the zip file
- use run_motor.m found in  motor_parametrs_estimation to estimate your motor paramters
- export your pyhsical model from CAD and import it to the mod_inverted_pend.slx found in the other folder
- run mod_lin.m
- adjust Q,R matrixes and run lqr.m
- monitor the simulation

# prequesites 
if you are using the Hardware in the loop simulink model in the real life application:
- Simulink Hardware Support package for arduino
- Drivers guide 

if you are using the simulink model in the real life application:
- Arduinoio
