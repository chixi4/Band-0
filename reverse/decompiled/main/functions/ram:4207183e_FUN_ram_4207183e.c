
undefined4 FUN_ram_4207183e(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = 1;
  *param_1 = 0;
  FUN_ram_42072162(param_1 + 0xc);
  FUN_ram_4206806e(param_1 + 0x6c);
  FUN_ram_42072140(param_1 + 0x74);
  FUN_ram_42072140(param_1 + 0x8c);
  FUN_ram_4206806e(param_1 + 0xa4);
  iVar1 = FUN_ram_42073258(param_1 + 0xc,param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffb180;
  }
  return uVar2;
}

