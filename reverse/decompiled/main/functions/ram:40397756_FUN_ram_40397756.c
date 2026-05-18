
undefined4 FUN_ram_40397756(int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_1 != 0) && ((param_2 != 0 || (*(int *)(param_1 + 0x40) == 0)))) {
    uVar4 = FUN_ram_4039693c();
    iVar6 = *(int *)(param_1 + 0x38);
    if (iVar6 == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = *(char *)(param_1 + 0x44);
      FUN_ram_40396e28(param_1,param_2);
      uVar3 = (uint)cVar1;
      *(int *)(param_1 + 0x38) = iVar6 + -1;
      if (uVar3 == 0xffffffff) {
        if (((*(int *)(param_1 + 0x10) != 0) &&
            (iVar6 = FUN_ram_40398762(param_1 + 0x10), iVar6 != 0)) &&
           (param_3 != (undefined4 *)0x0)) {
          *param_3 = 1;
        }
      }
      else {
        uVar5 = FUN_ram_403980ea();
        if (uVar3 < uVar5) {
          if (uVar3 == 0x7f) goto LAB_ram_40397766;
          *(char *)(param_1 + 0x44) = (char)((uVar3 + 1) * 0x1000000 >> 0x18);
        }
      }
      uVar2 = 1;
    }
    FUN_ram_40396956(uVar4);
    return uVar2;
  }
LAB_ram_40397766:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

