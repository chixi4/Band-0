
int FUN_ram_4201a556(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
                    int *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  piVar1 = (int *)FUN_ram_40390574(1,8,0x800);
  if (piVar1 == (int *)0x0) {
    return 0x101;
  }
  puVar2 = (undefined4 *)FUN_ram_40390574(1,4,0x800);
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = 0x101;
LAB_ram_4201a5fe:
    thunk_FUN_ram_40390608(piVar1);
  }
  else {
    *piVar1 = (int)puVar2;
    uVar4 = 0x12;
    if (param_3 == 1) {
      uVar4 = 9;
    }
    iVar3 = FUN_ram_4201a12e(param_1,param_2,1,uVar4,1,&uStack_24);
    if (iVar3 == 0) {
      *puVar2 = uStack_24;
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
      if (iVar3 != 0x103) {
        thunk_FUN_ram_40390608(puVar2);
        goto LAB_ram_4201a5fe;
      }
    }
    piVar1[1] = iVar5;
    iVar3 = 0;
    *param_4 = uStack_24;
    *param_5 = (int)piVar1;
  }
  return iVar3;
}

