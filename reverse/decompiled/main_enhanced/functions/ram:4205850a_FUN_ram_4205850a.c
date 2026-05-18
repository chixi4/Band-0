
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205850a(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_ram_420531dc(0xb);
  puVar3 = _DAT_ram_3fcc5330;
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  *puVar1 = 0;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  puVar1[1] = param_1;
  if (puVar3 != (undefined4 *)0x0) {
    if (param_1 - puVar3[1] < 0) {
      *puVar1 = puVar3;
    }
    else {
      do {
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar2;
        if (puVar3 == (undefined4 *)0x0) break;
      } while (-1 < param_1 - puVar3[1]);
      *puVar1 = puVar3;
      *puVar2 = puVar1;
      puVar1 = _DAT_ram_3fcc5330;
    }
  }
  _DAT_ram_3fcc5330 = puVar1;
  return;
}

