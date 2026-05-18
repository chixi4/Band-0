
int FUN_ram_4205ff08(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [292];
  
  FUN_ram_42066ab0(auStack_138);
  iVar1 = FUN_ram_42066d3c(auStack_138,param_1,0x80);
  if (-1 < iVar1) {
    FUN_ram_4039c11e(auStack_148,param_2,0x10);
    iVar1 = FUN_ram_42067ac6(auStack_138,0,param_4,auStack_148,param_3,param_3);
  }
  FUN_ram_42066abe(auStack_138);
  return iVar1;
}

