# Traffic-Light
Traffic lights built using C++ and Arduino IDE.



<img width="472" height="610" alt="image" src="https://github.com/user-attachments/assets/6dbb909b-5b02-4f26-bbce-a0498df50f0a" />


This is the layout of my simple traffic light. The 3 LEDs on the top represent the traffic lights for the cars and the 2 LEDs on the bottom are for the pedestrians.

In the initial phase, I just used a loop which would just cycle from red to yellow to green constantly. However, I wanted a touch of realism and decided to include pedestrian lights. 
However, I did not feel satisfied and decided to include a button which would trigger the pedestrian lights. This was an issue as I did not know how to integrate the button into the circuit. However, I soon learnt that the button acted as a supplement rather than a part of the circuit. After a few rounds of refinement, it was pointed out to me that my traffic light ,if implement in the real world, would be considered a safety hazard. This is because the traffic light turns red as the pedestrian light turns green. So, I created four states {GREEN,YELLOW,RED,WALK} -> the circuit would cycle through each state, thus, allowing the traffic light to turn red before the pedestrian light turns green.

This is my first ever project using Arduino. I managed to learn the basics of C++ syntax such as if else statements,loops and functions. I also learnt a new concept called finite state machine (FSM). For my next project, I hope to dive deeper into the functionality of the Arduino and build a reaction time game.
