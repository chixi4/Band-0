
void FUN_ram_40394a24(uint *param_1,code *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == (code *)0x0) {
    param_2 = (code *)&SUB_ram_403849ec;
  }
  do {
    if (param_1 == (uint *)0x4) {
      return;
    }
    bVar1 = true;
    do {
      uVar3 = *param_1;
      if (uVar3 < 4) {
        return;
      }
      if (!bVar1) {
        return;
      }
      iVar2 = (*param_2)(param_1 + 1,uVar3 & 0xfffffffc,~uVar3 & 1,param_3);
      bVar1 = false;
    } while (iVar2 == 0);
    param_1 = (uint *)((int)(param_1 + 1) + (*param_1 & 0xfffffffc));
  } while( true );
}

