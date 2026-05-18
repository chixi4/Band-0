
bool FUN_ram_403927c8(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (param_2 & 0xfffff) >> 10 | param_2 & 0x3ff;
  if ((param_2 >> 0x14 & 0x3ff) == 0) {
    *(undefined1 *)(param_1 + 8) = 0;
    if (uVar1 == 0) {
      *(undefined4 *)(param_1 + 4) = 0;
      bVar2 = true;
      iVar3 = 0;
    }
    else {
      iVar3 = (*(code *)&SUB_ram_40010918)(uVar1);
      fence();
      iVar3 = *(int *)((iVar3 + 2) * 4 + param_1);
      fence();
      bVar2 = false;
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  else {
    iVar3 = (*(code *)&SUB_ram_40010918)();
    fence();
    iVar3 = *(int *)((iVar3 + 2) * 4 + param_1);
    fence();
    uVar4 = *(uint *)(iVar3 + 8);
    *(int *)(param_1 + 4) = iVar3;
    uVar1 = uVar1 & uVar4;
    bVar2 = uVar1 == 0;
    *(bool *)(param_1 + 8) = uVar1 != 0;
  }
  *param_3 = iVar3;
  return bVar2;
}

