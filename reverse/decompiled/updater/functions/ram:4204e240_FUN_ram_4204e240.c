
void FUN_ram_4204e240(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_a3;
  int iVar5;
  int extraout_a4;
  int iVar6;
  int extraout_a5;
  
  iVar1 = 5;
  if (param_1 != 0) {
    iVar1 = (uint)(param_1 - 1U < 2) << 3;
  }
  FUN_ram_4204e234();
  iVar4 = iVar1 << 2;
  iVar6 = 0;
  iVar5 = 0x6003b040;
  do {
    if (iVar6 == iVar4) {
      for (iVar4 = 0; iVar4 != iVar1; iVar4 = iVar4 + 1) {
        if (*(int *)(iVar4 * 4 + param_2) != 0) {
          return;
        }
      }
      FUN_ram_40399b58();
      iVar4 = extraout_a3;
      iVar5 = extraout_a4;
      iVar6 = extraout_a5;
    }
    puVar2 = (undefined4 *)(iVar6 + iVar5);
    puVar3 = (undefined4 *)(param_2 + iVar6);
    iVar6 = iVar6 + 4;
    *puVar3 = *puVar2;
  } while( true );
}

