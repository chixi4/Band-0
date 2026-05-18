
byte * FUN_ram_4208c116(uint param_1,byte *param_2,int param_3,undefined4 param_4,int param_5,
                       int param_6)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  pbVar1 = param_2;
  while( true ) {
    if (((int)(param_2 + (param_3 - (int)pbVar1)) < 2) ||
       (uVar3 = (uint)pbVar1[1], (int)(param_2 + (param_3 - (int)pbVar1)) <= (int)(uVar3 + 1))) {
      return (byte *)0x0;
    }
    if ((*pbVar1 == param_1) &&
       ((param_6 + param_5 <= (int)uVar3 &&
        (iVar2 = FUN_ram_4039c0e0(pbVar1 + param_6 + 2,param_4,param_5), iVar2 == 0)))) break;
    pbVar1 = pbVar1 + uVar3 + 2;
  }
  return pbVar1;
}

