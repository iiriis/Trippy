# Trippy


#Inspiration

A few days back one of our friends bike got stolen from the garage at middle of the night. The theif sneaked in by breaking the garage door and manuvering its way towards the bike (we suspect). Being a friend of his, we thought of helping him with some of our creation and being electronics engineer it was our challenge time to come up with a simple, lowcost, easy to install, yet powerful and very useful solution. We went for a laser based alarm system (laser trip wire) inspired from the spy or agent movies like 007 from Bond series or Ethan Hunt from Mission impossible, where they have to trespass laser security systems for access gain.

#What it does

It is a laser trip wire, which will be monitoring a walkway. Upon turning this on if anyone trips it or falls on the laser, an alarm will be raised and along with that a bright flasing light will start. Which might scare the trespasser. But there is a catch (loop hole) which we have upgraded in this simple trip system. These trippers can be exploited or freezed from outside by flasing a bright light or a dummy laser to the sensor (if the trespasser is too smart) thus fooling the sensor not to trip upon blocking the actual laser path. But with this laser trip wire, its impossible to do that, since we have modulated the laser ray which will be discussed in the next section. 

#How we built it

It consists of a laser beam well a modulated laser beam that gets spit out from a the circuit from one end and bounces from a mirror from the other end and falls on a phototransistor. This Phototransistor detects the beam and matches its modulaed frequency. If the beam falls correctly over the phototransistor, the alarm stays cool and doesnt bark. As soon as the laser gets tripped or by any means it gets blocked, it starts an annoying high pitch alarm, along with bright flashing lights. The laser, phototransistor, a peizo buzzer for the alarm, and a white LED for flashing, all are controlled via an Arduino. The laser is modulated with a random frequency which is set by the Arduino and looks for the same frequency of the laser to fall on the phototransistor. Usually this frequency is in the kHz range. So by this way, one cannot fool the phototransistor by targetting a dummy laser to it, making it to think its the original beam. The original beam will be modulated and changing randomly. And Arduinos are good at it by using a floating pin and the random() to generate the random nos. We placed the components in a breadboard and a mirror to bounce the laser.

#Challenges we ran into

The sampling rate of the ADC of Arduino by default was very slow around 8.7kHz whch was way too slow for our project, we had to speed it up. Aligning the laser to the phototransistor was initially a bit of challenge, but after setup, we got it right. Creating a random frequency to modulate and detect it was bit challenging.

#Accomplishments we are proud of

Completing the project was the biggest ah-haa moment, like when the buzzer and the LED started barking upon tripping the Laser beam. Its a very crude setup, but does the job pretty well and thats what we like it, simple, low Cost, but effective.

#What we learned

We learned a lot about Laser communication and how effectively and with high speed we can communicate with Lasers, we learned how to increase the ADC sampling rate, what are prescalers, which we think will be very useful for our future projects. Reduced the ADC conversion time from 120us to 20us. We figured out the loop hole of the existing types Laser trip wires, i.e  by flasing a dummy Laser. 

#Whats next for Trippy

Making an enclosure to secure everything inside it and easy to install, replace the Arduino with an WiFi chip like ESP8266 so that it can send you a notification as an add on. This will be really helpful for those who are not on the zone.
