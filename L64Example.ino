/**
   USE OF THIS SOFTWARE IS GOVERNED BY THE TERMS AND CONDITIONS
   OF THE LICENSE STATEMENT AND LIMITED WARRANTY FURNISHED WITH
   THE PRODUCT.
   <p/>
   IN PARTICULAR, YOU WILL INDEMNIFY AND HOLD ITS AUTHOR, ITS
   RELATED ENTITIES AND ITS SUPPLIERS, HARMLESS FROM AND AGAINST ANY
   CLAIMS OR LIABILITIES ARISING OUT OF THE USE, REPRODUCTION, OR
   DISTRIBUTION OF YOUR PROGRAMS, INCLUDING ANY CLAIMS OR LIABILITIES
   ARISING OUT OF OR RESULTING FROM THE USE, MODIFICATION, OR
   DISTRIBUTION OF PROGRAMS OR FILES CREATED FROM, BASED ON, AND/OR
   DERIVED FROM THIS SOURCE CODE FILE.
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Log64 Example

// if you want to see the log you need to put in the beggining of your code the following
//
// #define LOG64_ENABLED
// #define EEPROM_LOG64_ENABLED
//
// for realease you just comments the #define out and everything related to logging 
// will be omitted from your code and will not consume any memory
//
// IMPORTANT !!!!
//
// the two #define need to be BEFORE the : #include "Log64.h" ( <Log64.h> ) 

#define LOG64_ENABLED
#define EEPROM_LOG64_ENABLED

#include "Log64.h"

void setup()
{
  LOG64_INIT();
}


int count = 0; 

void loop()
{

  // print in the serial log
  LOG64_SET("Test message");  
  LOG64_NEW_LINE;

  // print in serial now (if enabled) and will be stored in EPROM to be dumped on next start
  LOG64_EEPROM_SET_IMPL(String("Test message") + String(++count));  
  
  delay(3000);

}
