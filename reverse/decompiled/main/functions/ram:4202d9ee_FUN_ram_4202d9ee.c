
int FUN_ram_4202d9ee(int param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  byte bStack_14;
  undefined1 uStack_13;
  short sStack_12;
  
  uVar1 = *(undefined2 *)(param_1 + 4);
  FUN_ram_4202d72e(*param_2);
  iVar2 = FUN_ram_4202d598(param_2,4);
  if (iVar2 != 0) {
    return iVar2;
  }
  FUN_ram_4203696c(*(undefined4 *)*param_2,*(undefined2 *)(*param_2 + 6),&bStack_14);
  (*(code *)&SUB_ram_400119dc)(*param_2,4);
  uVar3 = (uint)bStack_14;
  if (*(short *)(*param_2 + 0x10) == sStack_12) {
    if ((uVar3 < 0x1b) && (*(code **)(&DAT_ram_3c0f5498 + uVar3 * 4) != (code *)0x0)) {
      iVar2 = (**(code **)(&DAT_ram_3c0f5498 + uVar3 * 4))(uVar1,&bStack_14,param_2);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = 0x10;
    }
    FUN_ram_420369f6(uVar1,uStack_13,0,0,0);
    return iVar2;
  }
  if (uVar3 != 1) {
    FUN_ram_420369f6(uVar1,uStack_13,0,0,0);
  }
  return 10;
}

