
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42083204(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  
  if (param_1 == (byte *)0x0) {
    FUN_ram_4207a038(1,0x10000,2,&DAT_ram_3c101dd0);
  }
  else {
    uVar2 = (uint)*param_1;
    pbVar3 = (byte *)(gp + -0xac);
    if ((uVar2 < 0x1b) && (uVar4 = (uint)pbVar3[uVar2 * 8], uVar4 == uVar2)) {
LAB_ram_4208327e:
      if (*(code **)(pbVar3 + uVar4 * 8 + 4) != (code *)0x0) {
        (**(code **)(pbVar3 + uVar4 * 8 + 4))(param_1);
      }
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
      return 1;
    }
    uVar4 = 0;
    pbVar1 = pbVar3;
    do {
      if (*pbVar1 == uVar2) goto LAB_ram_4208327e;
      uVar4 = uVar4 + 1 & 0xff;
      pbVar1 = pbVar1 + 8;
    } while (uVar4 != 0x1b);
    FUN_ram_4207a038(1,0x10000,2,&DAT_ram_3c101ddc);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
  }
  return 0;
}

