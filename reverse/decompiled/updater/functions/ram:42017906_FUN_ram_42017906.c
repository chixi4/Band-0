
void FUN_ram_42017906(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = 0;
  FUN_ram_42017900();
  do {
    puVar2 = (undefined1 *)(param_2 + iVar1);
    iVar1 = iVar1 + 1;
    FUN_ram_420178fa(*puVar2);
  } while (iVar1 != 0x2a);
  return;
}

