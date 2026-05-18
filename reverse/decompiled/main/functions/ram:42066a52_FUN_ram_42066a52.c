
int FUN_ram_42066a52(undefined4 param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 uStack_20;
  ushort uStack_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _uStack_20 = CONCAT22(param_2 >> 8 | param_2 << 8,0x200);
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_ram_4205be7a("Sleep first when your body is drained.",&uStack_1c);
  iVar1 = FUN_ram_42051418(param_1,param_3,param_4,0,&uStack_20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

