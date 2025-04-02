//pin for switch and purge.
const int switchPin = 53;
const int purgePin = 51;

//Function const
const int mainHopper = 2;
const int qtrInRelease = //tbd
const int halfInRelease =
const int halfInServoTop =
const int halfInServoBot
const int qrtInServoTop
const int qrtInServoBot
const int qrtInIrTop
const int qrtInIrBot
const int halfInIrTop
const int halfInIrTop

//Variable to store the Input states
int switchState = 0;
int purgeState = 0;
int sensorStateHalfTop = 0;
int sensorStateHalfBot = 0;
int sensorStateQtrTop = 0;
int sensorStateQtrBot = 0;

void setup() {
  // put your setup code here, to run once:
//set the switch/purge pin as an input.
pinMode(switchPin, INPUT_PULLUP);
pinMode(purgePin, INPUT_PULLUP)
//set the functions as an output and the IR as an input.
pinMode(mainHopper, OUTPUT); 
pinMode(qrtInRelease, OUTPUT); 
pinMode(HalfInRelease, OUTPUT); 
pinMode(halfInServoTop, OUTPUT); 
pinMode(halfInServoBot, OUTPUT); 
pinMode(qrtInServoTop, OUTPUT); 
pinMode(qrtInServoBot, OUTPUT); 

pinMode(qrtInIrTop, INPUT);
pinMode(qrtInIrBot, INPUT);
pinMode(halfInIrTop, INPUT);
pinMode(halfInIrBot, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
