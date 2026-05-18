
void FUN_ram_4206bdee(byte param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     int param_7,int param_8)

{
  int in_t1;
  int iVar1;
  int unaff_s2;
  byte *in_t3;
  byte *pbVar2;
  int in_t5;
  
  gp = gp + 0x15;
  do {
    *in_t3 = param_1;
    if (param_6 == in_t1) {
      param_5 = param_5 + 0x10;
      param_3 = param_3 + 1;
      while (param_4 <= param_3) {
        param_2 = param_2 + -1;
        if (param_2 == 0) {
          return;
        }
        param_7 = param_4 * 0x20;
        param_8 = param_7 + 0x48;
        param_5 = unaff_s2 + 0x58;
        param_4 = param_4 << 1;
        param_3 = 1;
      }
      in_t5 = param_7 + param_5;
      param_6 = 0;
    }
    iVar1 = param_8 + param_6;
    pbVar2 = (byte *)(param_5 + param_6);
    in_t3 = (byte *)(in_t5 + param_6);
    param_6 = param_6 + 1;
    param_1 = *(byte *)(iVar1 + unaff_s2) ^ *pbVar2;
  } while( true );
}

