
undefined4 FUN_ram_4206826c(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == param_2) {
    return 0;
  }
  uVar4 = (uint)*(ushort *)((int)param_1 + 6);
  uVar2 = (uint)*(ushort *)((int)param_2 + 6);
  if (*(ushort *)((int)param_2 + 6) == 0) {
    if (uVar4 != 0) {
      *(undefined2 *)(param_1 + 1) = 1;
      (*(code *)&SUB_ram_40010488)(*param_1,0,uVar4 << 2);
    }
  }
  else {
    do {
      uVar1 = uVar2;
      uVar2 = uVar1 - 1;
      if (uVar2 == 0) break;
    } while (*(int *)(*param_2 + uVar2 * 4) == 0);
    *(short *)(param_1 + 1) = (short)param_2[1];
    if (uVar4 < uVar1) {
      iVar3 = FUN_ram_420680a2(param_1,uVar1);
      if (iVar3 != 0) {
        return 0xfffffff0;
      }
    }
    else {
      (*(code *)&SUB_ram_40010488)(uVar1 * 4 + *param_1,0,(uVar4 - uVar1) * 4);
    }
    FUN_ram_4039c11e(*param_1,*param_2,uVar1 << 2);
  }
  return 0;
}

