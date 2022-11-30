



int main() {
   initwindow(HEIGHT, WIDTH);
   
   create_control(TURNLEFT, 11*SIZEBUTTON+1, 0.5*SIZEBUTTON, "TURNLEFT.bmp");
   create_control(TURNRIGHT, 11*SIZEBUTTON, 2.5*SIZEBUTTON, "TURNRIGHT.bmp");
   create_control(MOVEMENT, 11*SIZEBUTTON, 4.5*SIZEBUTTON, "MOVEMENT.bmp");
   create_control(SCALE, 11*SIZEBUTTON, 4.5*SIZEBUTTON, "SCALE.bmp");
   create_control(SAVE, 11*SIZEBUTTON, WIDTH-3*SIZEBUTTON, "SAVE.bmp");
   create_control(EXIT, 11*SIZEBUTTON, WIDTH - SIZEBUTTON, "EXIT.bmp");
   
   int type = NONE_1;
   
   Figure figure;

   while (true) 
   {
      while (mousebuttons() != 1)
      switch (select_control()) 
      {
      case NONE:
         break;
      case TURNLEFT:
         _abracadabra_cast(figure);