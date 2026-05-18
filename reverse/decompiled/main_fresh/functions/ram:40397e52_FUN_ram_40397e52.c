
void FUN_ram_40397e52(undefined4 param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                     undefined4 *param_6,undefined4 *param_7)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  (*(code *)&SUB_ram_40010488)(param_7[0xc],0xa5);
  uVar2 = param_7[0xc] + param_3 + -1 & 0xfffffff0;
  param_7[0x11] = uVar2;
  if (param_2 != 0) {
    iVar4 = 0;
    do {
      cVar1 = *(char *)(param_2 + iVar4);
      *(char *)((int)param_7 + iVar4 + 0x34) = cVar1;
      if (cVar1 == '\0') break;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x10);
    *(undefined1 *)((int)param_7 + 0x43) = 0;
  }
  if (0x18 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  param_7[0xb] = param_5;
  param_7[0x12] = param_5;
  FUN_ram_40396d14(param_7 + 1);
  FUN_ram_40396d14(param_7 + 6);
  param_7[6] = 0x19 - param_5;
  param_7[4] = param_7;
  param_7[9] = param_7;
  FUN_ram_420128d4(param_7 + 0x16);
  uVar3 = FUN_ram_4039686c(uVar2,param_1,param_4);
  *param_7 = uVar3;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = param_7;
  }
  return;
}

