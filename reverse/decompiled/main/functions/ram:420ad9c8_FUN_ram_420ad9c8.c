
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420ad9c8(undefined1 *param_1,byte *param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  if (-1 < (int)(_DAT_ram_3fcb7fb0 << 8)) {
    uVar4 = (*(code *)*_DAT_ram_3fcc4c78)(DAT_ram_3fcb7f61);
    DAT_ram_3fcb7ff6 = (undefined1)uVar4;
    uVar2 = uVar4 & 0xff;
    if (0x2d < uVar4) {
      uVar2 = 0x2d;
    }
    uVar4 = (uVar2 + 0x38) * 0x52;
    DAT_ram_3fcb7ff7 =
         (*(code *)&SUB_ram_40012218)
                   ((int)((uVar4 / ((uint)*param_2 * 10) - 8) * 0x10000) >> 0x10,*param_1,2);
    DAT_ram_3fcb7ff8 =
         (*(code *)&SUB_ram_40012218)
                   ((int)((uVar4 / ((uint)param_2[1] * 10) - 8) * 0x10000) >> 0x10,param_1[1],2);
    uVar4 = 0;
    puVar1 = &DAT_ram_3fcb7e68;
    do {
      pbVar6 = (byte *)(param_3 + uVar4);
      uVar5 = uVar4 & 1;
      uVar4 = uVar4 + 1;
      uVar3 = (*(code *)&SUB_ram_40012218)
                        ((int)((((uVar2 + 0x38) * 0x334) / ((uint)*pbVar6 * 0x68) - 8) * 0x10000) >>
                         0x10,param_1[uVar5 + 2],2);
      puVar1[0x193] = uVar3;
      puVar1 = puVar1 + 1;
    } while (uVar4 != 4);
    _DAT_ram_3fcb7fb0 = _DAT_ram_3fcb7fb0 | 0x800000;
  }
  return;
}

