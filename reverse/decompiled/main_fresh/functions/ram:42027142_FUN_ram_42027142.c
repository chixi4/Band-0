
int FUN_ram_42027142(uint param_1)

{
  int iVar1;
  undefined2 auStack_18 [2];
  ushort auStack_14 [6];
  
  auStack_18[0] = (undefined2)param_1;
  iVar1 = FUN_ram_420332b4(0x201b,auStack_18,2,auStack_14);
  if ((iVar1 == 0) && (auStack_14[0] != param_1)) {
    iVar1 = 0xc;
  }
  return iVar1;
}

