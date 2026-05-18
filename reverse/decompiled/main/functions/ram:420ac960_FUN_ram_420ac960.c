
void FUN_ram_420ac960(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  *param_1 = (char)param_2;
  param_1[1] = (char)((uint)param_2 >> 8);
  param_1[2] = (char)((uint)param_2 >> 0x10);
  param_1[3] = (char)((uint)param_2 >> 0x18);
  local_18 = 0;
  uStack_14 = 0;
  FUN_ram_420ac91c(&local_18);
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    param_1[iVar1 + 4] = *(undefined1 *)((int)&local_18 + iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 8);
  return;
}

