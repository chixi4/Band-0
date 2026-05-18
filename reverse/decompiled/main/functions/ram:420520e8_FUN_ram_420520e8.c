
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420520e8(void)

{
  int iVar1;
  int aiStack_14 [3];
  
  if (_DAT_ram_3fcc2034 == 0) {
    aiStack_14[0] = _DAT_ram_3fcc2038;
    if (_DAT_ram_3fcc2038 == 0) goto LAB_ram_4205212e;
  }
  else {
    _DAT_ram_3fcc2038 = 0;
    iVar1 = FUN_ram_42053088(_DAT_ram_3fcc2034,aiStack_14,0x42042264,0);
    if (iVar1 == -5) {
      return;
    }
    if (iVar1 != 0) {
LAB_ram_4205212e:
      FUN_ram_42058690(0x42041fe6,0);
      FUN_ram_420585b0(15000,0x42041fe6,0);
      return;
    }
  }
  _DAT_ram_3fcc2038 = aiStack_14[0];
  FUN_ram_42052036(aiStack_14);
  return;
}

