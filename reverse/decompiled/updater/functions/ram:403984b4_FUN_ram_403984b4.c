
void FUN_ram_403984b4(int param_1,int param_2,undefined4 param_3,int param_4,int *param_5,
                     int *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  param_2 = param_1 / param_2;
  iVar2 = (param_4 + 1) * (param_1 / 1000);
  if (iVar2 < -999999) {
    iVar1 = 0;
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 / 1000000;
    iVar1 = iVar2 / param_2;
    if (0 < iVar1) {
      uVar3 = (iVar1 + 1) * param_2 - iVar2;
      goto LAB_ram_403984f2;
    }
  }
  uVar3 = (uint)(param_2 < iVar2 << 2);
LAB_ram_403984f2:
  *param_5 = iVar1;
  *param_6 = uVar3 - 1;
  return;
}

