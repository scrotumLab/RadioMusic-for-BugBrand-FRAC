# RadioMusic-for-BugBrand-FRAC
With the permission of Tom Whitwell (Music Thing Modular), creator of [the original Radio Music module](https://github.com/TomWhitwell/RadioMusic), Scrotum Lab made different versions of the project compatible with the BugBrand Modular System in FRAC format.

This project was only made possible because Tom Whitwell licensed all hardware and software design as Creative Commons: [CC-BY-SA: Attribution / ShareAlike](https://creativecommons.org/licenses/by-sa/3.0/), allowing people to learn and share knowledge.  
Without him or other great creators like Emilie Gillet, I would have been incapable of doing the Scrotum Lab adaptations for the BugBrand system.

Here you will find:
- The last version (v3.2) of the schematics and board files in Diptrace format.
- The Arduino code which was changed to allow mixing & attenuation to the circuit and works on v3.x versions of the Scrotum Lab module (not the earlier versions which still use the original Music Thing Modular code). 
- The frontpanel design as GERBER file (frontpanels in the BugBrand system are made of PCB material).
- The settings.txt file to put on your SD Card.

As the main purpose of the Scrotum Lab Radio Music was to be used as a sample player, the main markings on the front panel were changed: "Station" became "Sample Select" / "Start" became "Pitch" / "Reset" became "Trig".

Instead of 3.5mm plugs, banana plugs are used like the ones found on the BugBrand system.<br>

2 x CV inputs were added to mix/attenuate the incoming signal at "Sample Select" and "Pitch" inputs.<br> 
These CV inputs now accept bipolar signal -5V/+5V or unipolar +10V.<br> 

Mostly all through hole components were replaced by SMD components (0805).<br> 

![Scrotum-Lab-Radio-Music-v3 1](https://user-images.githubusercontent.com/39232489/63490793-d13be980-c4b5-11e9-9c12-ad146505ee79.jpg)
