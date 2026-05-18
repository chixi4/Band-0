
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420b2d9c(byte *param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  code *pcVar4;
  
  if (param_1 == (byte *)0x0) {
    FUN_ram_4207a038(6,0x800,2,&DAT_ram_3c102374);
  }
  else {
    uVar1 = (uint)*param_1;
    uVar3 = (uint)(byte)(&DAT_ram_3fcb7ddc)[uVar1 * 8];
    if (uVar3 == uVar1) {
      if (uVar3 < 0xe) {
LAB_ram_420b2e2e:
        pcVar4 = *(code **)(uVar3 * 8 + 0x3fcb7de0);
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(param_1);
        }
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
        return 1;
      }
    }
    else {
      pbVar2 = &DAT_ram_3fcb7ddc;
      uVar3 = 0;
      do {
        if (*pbVar2 == uVar1) goto LAB_ram_420b2e2e;
        uVar3 = uVar3 + 1 & 0xff;
        pbVar2 = pbVar2 + 8;
      } while (uVar3 != 0xe);
    }
    FUN_ram_4207a038(6,0x800,2,&DAT_ram_3c102380);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
  }
  return 0;
}

