
void FUN_ram_42065a2a(int param_1,code *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0x74);
    if ((uVar2 != 0) && (*(ushort *)(param_1 + 0x1c) != 0)) {
      uVar1 = (uint)*(ushort *)(param_1 + 0x1c) * 0xc0 + -0xc0 + uVar2;
      while ((uVar2 <= uVar1 &&
             ((param_2 == (code *)0x0 || (iVar3 = (*param_2)(uVar2,param_3), iVar3 != 0))))) {
        uVar2 = uVar2 + 0xc0;
      }
    }
    return;
  }
  return;
}

