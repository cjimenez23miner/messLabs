#include <msp430.h>
#include "state_mach.h"
#include "buzzer.h"
#include "switches.h"

/* Songs to be Played */

//Power Rangers: Zordon Calling
static int song1[] = {750,1000,1250,1500,1750,2000};

//Power Rangers: Song Intro
static int song2[] = {1000,1300,900,500,750,1000,1300,1000,750,1000};

//Adam's Family
static int song3[] = {2000,1750,1300,1000,1250,1600,1450,1000};

//La Cucaracha
static int song4[] = {500,1500,1000,500,1500,1000,500,1500,1000};

void change_note(){
  static int current_note =0;

  //To get rid of the annoying beep sound before actually touching a button
  buzzer_set_period(0);

  /* Here the differents song's arrays will be played using buzzer_set_period() while the method traverse through the each song's arrays */
  
  if(song == 1){
    if(current_note < 6){
      buzzer_set_period(song1[current_note++]);
    }
    //After the song is played
    else{
      song = 0;
      current_note = 0;
    }
  }
  
  else if(song == 2){
    if(current_note < 10){
      buzzer_set_period(song2[current_note++]);
    }
    //After the song is played
    else{
      song = 0;
      current_note = 0;
    }
  }
   else if(song == 3){
     if(current_note < 8){
      buzzer_set_period(song3[current_note++]);
    }
    //After the song is played
    else{
      song = 0;
      current_note = 0;
    }
  }
   else if(song == 4){
     if(current_note < 9){
      buzzer_set_period(song4[current_note++]);
    }
    //After the song is played
    else{
      song = 0;
      current_note = 0;
    }
  } 
}