
void FUN_ram_40396558(uint *param_1,code *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == (code *)0x0) {
    param_2 = (code *)&SUB_ram_40386520;
  }
  do {
    if (param_1 == (uint *)&DAT_ram_00000004) {
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
    uVar3 = *param_1;
    param_1 = (uint *)((int)(param_1 + 1) + (uVar3 & 0xfffffffc));
    if (uVar3 < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
  } while( true );
}

