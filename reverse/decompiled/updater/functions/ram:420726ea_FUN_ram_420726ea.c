
int FUN_ram_420726ea(uint *param_1,int param_2,uint *param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  pbVar1 = (byte *)*param_1;
  if (0 < param_2 - (int)pbVar1) {
    iVar3 = -0x22e2;
    if ((*pbVar1 & 0x7f) == 2) {
      *param_1 = (uint)(pbVar1 + 1);
      *param_3 = (uint)*pbVar1;
      iVar3 = FUN_ram_4202b8a0(param_1,param_2,param_3 + 1);
      if (iVar3 == 0) {
        uVar2 = *param_1;
        param_3[2] = uVar2;
        *param_1 = uVar2 + param_3[1];
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 + -0x2280;
      }
    }
    return iVar3;
  }
  return -0x22e0;
}

