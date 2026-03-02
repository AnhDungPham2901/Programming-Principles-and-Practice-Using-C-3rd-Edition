<b>[1] Why do we use graphics?</b>
- useful for scientific work such as graphic to explore
- help introduce OOP easier 
- provide useful code to read when it can map graphic components to code

<b>[2] When do we try not to use graphics?</b>
when indirect model of displaying can meet our needs. And when we don't care much about the performance/real time presenting that needs direct model displaying. 

<b>[3] Why is graphics interesting for a programmer?</b>
because it makes piece of code obvious and we can see what our code does immediately. 

<b>[4] What is a window?</b>
a window is where we attatch our objects to and it represents our physical screen. 

<b>[5] In which namespace do we keep our graphics interface classes (our graphics library)?</b>
Graph_lib

<b>[6] What header files do you need to do basic graphics using our graphics library?</b>
There are 5 header files. 
- GUI.h
- Window_Simple.h
- Window.h
- Graph.h
- Point.h

<b>[7] What is the simplest window to use?</b>

<b>[9] What’s a window label?</b>
thats is the text shown in the top of the window (outside of area of the window)

<b>[10] How do you label a window?</b>
Using window's member function: set_lable()
eg: 
```
win.set_lable("Window Lable");
```

<b>[11] How do screen coordinates work? Window coordinates? Mathematical coordinates?</b>
origin starts at the top left of the window and moving to to the right to increase the x-axis and moving down to increase the y-axis of the coordinates.

<b>[12] What are examples of simple “shapes” that we can display?</b>
rectangle, polygon, etc.

<b>[13] What command attaches a shape to a window? </b>
win.attach(SHAPE_OBJECT)

<b>[14] Which basic shape would you use to draw a hexagon?</b>

<b>[15] How do you write text somewhere in a window</b>
```
Text t{Point{200,100}, "This is text to display"};
win.attach(t);
win.set_label("Text");
win.wait_for_button();
```

<b>[16] How would you put a photo of your best friend in a window (using a program you wrote yourself)?</b>

<b>[17] You made a Window object, but nothing appears on your screen. What are some possible reasons for that?</b>

<b>[18] What library do we use to implement our graphics/GUI interface library? Why don’t we use the operating system directly?</b>
We use qt library to implement the GUI library. We dont use the OS directly as we don't want to deal with different implementation for different OS (window, mac, linux, etc). Using the library is the same reason why we use io standard library for handling input/output.

