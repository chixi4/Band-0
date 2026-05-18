
int FUN_ram_420271ce(uint param_1,undefined4 param_2)

{
  int iVar1;
  ushort auStack_28 [2];
  undefined2 uStack_24;
  undefined1 auStack_22 [26];
  
  uStack_24 = (undefined2)param_1;
  FUN_ram_4039c11e(auStack_22,param_2,0x10);
  iVar1 = FUN_ram_420332b4(0x201a,&uStack_24,0x12,auStack_28,2);
  if ((iVar1 == 0) && (auStack_28[0] != param_1)) {
    iVar1 = 0xc;
  }
  return iVar1;
}

