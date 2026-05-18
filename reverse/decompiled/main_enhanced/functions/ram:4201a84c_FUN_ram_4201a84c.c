
/* WARNING: Instruction at (ram,0x4201a84e) overlaps instruction at (ram,0x4201a84c)
    */

int FUN_ram_4201a84c(int param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                    int param_6)

{
  int iVar1;
  
  do {
    iVar1 = param_6;
    param_1 = param_1 + 1;
    if (param_1 == param_5) {
      return -1;
    }
    param_6 = iVar1 + 0xc;
  } while ((*(byte *)(iVar1 + 0x14) != param_4) || (*(byte *)(iVar1 + 0x15) != param_3));
  return param_1;
}

