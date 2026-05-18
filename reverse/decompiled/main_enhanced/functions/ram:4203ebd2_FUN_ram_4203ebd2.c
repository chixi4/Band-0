
undefined4
FUN_ram_4203ebd2(undefined4 param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                code *param_6)

{
  int unaff_s0;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *unaff_s5;
  
  iVar5 = *param_2;
  piVar1 = (int *)(*param_6)();
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = iVar5;
    piVar4 = piVar1;
    if (param_4 != 0) {
      do {
        *piVar4 = iVar3;
        piVar4 = piVar4 + 1;
        iVar3 = iVar3 + param_3;
      } while ((int *)(unaff_s0 + (int)piVar1) != piVar4);
    }
    *unaff_s5 = (int)piVar1;
    *param_2 = iVar5;
    uVar2 = 0;
  }
  return uVar2;
}

