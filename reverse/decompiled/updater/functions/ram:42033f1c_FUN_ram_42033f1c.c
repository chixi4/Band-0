
void FUN_ram_42033f1c(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (*(code *)&SUB_ram_40011ff0)(param_2 + param_3,4);
  uVar3 = 4;
  if (uVar1 < 0x101) {
    uVar3 = 2;
    if (uVar1 < 0x41) {
      uVar3 = 3;
    }
  }
  iVar2 = (*(code *)&SUB_ram_40011fdc)(0,uVar3,uVar1);
  if (iVar2 != 0) {
    *param_1 = *(int *)(*(int *)(iVar2 + 4) + 4) + param_2;
    *(short *)(iVar2 + 0x16) = (short)param_3;
  }
  return;
}

