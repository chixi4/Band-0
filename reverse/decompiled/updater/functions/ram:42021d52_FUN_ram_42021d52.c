
int FUN_ram_42021d52(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [292];
  
  FUN_ram_420231ac(auStack_138);
  iVar1 = FUN_ram_42023438(auStack_138,param_1,0x80);
  if (-1 < iVar1) {
    FUN_ram_40399daa(auStack_148,param_2,0x10);
    iVar1 = FUN_ram_420241c2(auStack_138,0,param_4,auStack_148,param_3,param_3);
  }
  FUN_ram_420231ba(auStack_138);
  return iVar1;
}

