void setup() {
  // put your setup code here, to run once:
 pinmode( inR1, output);
 pinmode( inR2, output);
 pinmode( inL1, output);
 pinmode( inL2, output);
 pinmode( hongngoai1, input);
 pinmode( hongngoai2, input);
 pinmode( hongngoai3, input);
 pinmode( hongngoai4, input);
}

void loop() {
  // put your main code here, to run repeatedly:
benphai = analogread(hongngoai1) + analogread(hongngoai2);
bentrai = analogread(hongngoai3) + analogread(hongngoai4);
if (benphai == 0 && bentrai == 0 ) {lui();}
else {giatrilech = benphai - bentrai }
if (giatrilech > 0) {retrai();}
void lui() { 
  digitalwrite(inR1, low);
  digitalwrite(inR2, high);
  digitalwrite(inL1, low);
  digitalwrite(inL2, high);
}
void retrai() {
  digitalwrite(inR1, high);
  digitalwrite(inR2, low);
  digitalwrite(inL1, low);
  digitalwrite(inL2, low);
}
}
Robo2k1
