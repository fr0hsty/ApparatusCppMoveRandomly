// Simple wrapper macro to make ue4's debug print line a tad neater
#define DebugPrint(x,y,z ) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, y, z, TEXT(x));}
