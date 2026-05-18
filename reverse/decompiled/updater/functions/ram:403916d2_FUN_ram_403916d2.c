
void FUN_ram_403916d2(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint auStack_24 [2];
  
  uVar1 = *param_3;
  if ((uVar1 & 0x1e0008) != 0) {
    uVar3 = *param_2;
    uVar4 = *param_1;
    auStack_24[0] = 0;
    iVar2 = FUN_ram_403945a0(uVar1,auStack_24);
    if (iVar2 == 0) {
      if (auStack_24[0] < uVar4) {
        auStack_24[0] = uVar4;
      }
      if ((uVar1 >> 0x11 & 3) != 0) {
        uVar1 = uVar1 & 0xfff9ffff | 8;
      }
      if ((uVar1 & 0x400) != 0) {
        uVar1 = uVar1 & 0xfffffff7;
      }
      *param_2 = -auStack_24[0] & (uVar3 + auStack_24[0]) - 1;
      *param_1 = auStack_24[0];
      *param_3 = uVar1 & 0xfff7ffff;
    }
    else {
      *param_3 = *param_3 | 0x80000000;
    }
  }
  return;
}

