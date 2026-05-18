
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202eb54(undefined4 param_1)

{
  int iVar1;
  undefined1 uStack_31;
  undefined1 auStack_30 [40];
  
  iVar1 = FUN_ram_4202b87e();
  if (iVar1 == 0) {
    iVar1 = 0x1e;
  }
  else {
    FUN_ram_4039c11e(_DAT_ram_3fcb6ba0 + 0x2c,param_1,0xa4);
    iVar1 = FUN_ram_420331d4(param_1,auStack_30,&uStack_31,0x1f);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4202eafe(auStack_30,uStack_31);
    }
  }
  return iVar1;
}

