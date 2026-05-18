
undefined4 FUN_ram_42048144(uint param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (-1 < (int)param_1) {
    uVar1 = (*(code *)&SUB_ram_40010974)(0x1fffff,0,param_1);
    uVar2 = 0x102;
    if ((uVar1 & 1) != 0) {
      iVar3 = 1 << (param_1 & 0x1f);
      if (param_2 == 0) {
        *(int *)(**(int **)(gp + -0x450) + 0xc) = iVar3;
      }
      else {
        *(int *)(**(int **)(gp + -0x450) + 8) = iVar3;
      }
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x102;
}

