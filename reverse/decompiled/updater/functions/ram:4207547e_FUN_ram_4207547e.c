
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207547e(int param_1,char param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 extraout_a4;
  char cVar4;
  
  cVar4 = '\0';
  if (param_1 != 0) {
    cVar4 = 'P';
  }
  param_2 = param_2 + cVar4;
  for (; cVar4 != param_2; cVar4 = cVar4 + '\x01') {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    uVar2 = FUN_ram_420762f4(uVar1 >> 0xc & 0xffff);
    puVar3 = (ushort *)((uVar2 & 0x7f) * 4 + param_4);
    (**(code **)(_DAT_ram_3fcb640c + 0xf8))
              ((uint)puVar3[1] << 0x14 | _DAT_ram_3fcb0b84 & 0x7ff | 0x80000,
               (uint)(DAT_ram_3fcb0aa0 >> 6) << 0x1e | (DAT_ram_3fcb0aa0 & 7) << 0x1b |
               (uint)*puVar3 << 6 | (uVar1 & 7) << 0xf | (uVar1 >> 4 & 0x7f) << 0x12 | 0x20,
               uVar1 >> 0xc & 0x3f,cVar4,extraout_a4,*(code **)(_DAT_ram_3fcb640c + 0xf8));
  }
  (*(code *)&SUB_ram_40012430)(0);
  (*(code *)&SUB_ram_4001242c)(0);
  (**(code **)(_DAT_ram_3fcb640c + 0x88))(0);
                    /* WARNING: Could not recover jumptable at 0x420754f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcb640c + 0x7c))();
  return;
}

