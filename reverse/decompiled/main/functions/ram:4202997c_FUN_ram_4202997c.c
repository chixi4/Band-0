
undefined4
FUN_ram_4202997c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_42029960(param_2);
  if (iVar1 == 0) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 1;
    }
    return 5;
  }
  uVar2 = FUN_ram_420297d2(param_1,iVar1,param_3);
  return uVar2;
}

