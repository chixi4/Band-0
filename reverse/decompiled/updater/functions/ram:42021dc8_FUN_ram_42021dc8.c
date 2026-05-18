
int FUN_ram_42021dc8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  undefined4 uStack_14c;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [292];
  
  uStack_14c = 0;
  FUN_ram_420231ac(auStack_138);
  iVar1 = FUN_ram_420231fe(auStack_138,param_1,param_2 << 3);
  if (-1 < iVar1) {
    iVar1 = FUN_ram_42024642(auStack_138,param_5,&uStack_14c,param_3,auStack_148,param_4);
  }
  FUN_ram_420231ba(auStack_138);
  return iVar1;
}

