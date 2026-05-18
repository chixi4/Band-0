
int FUN_ram_42068380(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  while( true ) {
    if (*(ushort *)((int)param_1 + 6) <= uVar1) {
      return 0;
    }
    if (*(int *)(*param_1 + uVar1 * 4) != 0) break;
    uVar1 = uVar1 + 1;
  }
  iVar2 = (*(code *)&SUB_ram_400108ec)();
  return iVar2 + uVar1 * 0x20;
}

