
void FUN_ram_4209770e(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined1 auStack_18 [8];
  
  FUN_ram_4039c11e(auStack_18,param_2 + 0x1c,6);
  FUN_ram_4039c11e(&iStack_24,param_2 + 0x18,4);
  FUN_ram_4039c11e(&iStack_20,param_2 + 0xc,4);
  FUN_ram_4039c11e(&iStack_1c,param_2 + 0x10,4);
  if (iStack_24 == 0) {
    if (iStack_20 == 0) {
      if ((int)((uint)*(ushort *)(param_2 + 10) << 0x18) < 0) {
        *param_3 = *(int *)(param_1 + 4);
        return;
      }
      piVar1 = &iStack_1c;
      *param_3 = iStack_1c;
    }
    else {
      *param_3 = iStack_20;
      piVar1 = &iStack_20;
    }
  }
  else {
    *param_3 = iStack_24;
    piVar1 = &iStack_24;
  }
  FUN_ram_4205a932(piVar1,auStack_18);
  return;
}

