
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40396c8c(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  do {
    *(uint *)(*param_1 + 0x6c) = *(uint *)(*param_1 + 0x6c) | 1;
    uVar5 = (*(code *)&SUB_ram_400102ac)(param_1,1);
    iVar4 = (*(code *)&SUB_ram_400109f0)
                      ((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),
                       *(uint *)(*param_1 + 0x34) & 0x3ffffff,0);
    iVar2 = iVar4 - _DAT_ram_3fcc4ebc;
    if (iVar4 != _DAT_ram_3fcc4ebc) {
      bVar1 = _DAT_ram_3fcc4ebc == 0;
      iVar3 = iVar2;
      _DAT_ram_3fcc4ebc = iVar4;
      if (bVar1) {
        iVar3 = 1;
        _DAT_ram_3fcc4ebc = iVar2;
      }
      do {
        iVar3 = iVar3 + -1;
        FUN_ram_40396c5c();
      } while (iVar3 != 0);
    }
  } while ((*(uint *)(*param_1 + 0x70) & 1) != 0);
  return;
}

