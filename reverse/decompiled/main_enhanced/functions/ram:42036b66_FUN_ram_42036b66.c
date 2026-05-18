
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42036b66(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_42036b12();
  uVar1 = 6;
  if (iVar2 == 0) {
    thunk_FUN_ram_4202b7dc();
    FUN_ram_4039c11e(_DAT_ram_3fcb6be8,param_1,6);
    thunk_FUN_ram_4202b7f6();
    uVar1 = 0;
  }
  return uVar1;
}

