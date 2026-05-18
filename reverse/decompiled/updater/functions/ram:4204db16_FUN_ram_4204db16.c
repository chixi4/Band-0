
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204db16(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined1 uStack_22;
  undefined1 auStack_21 [9];
  
  do {
  } while ((_DAT_ram_60047cf8 & 1) == 0);
  _DAT_ram_60047c34 = 0;
  _DAT_ram_60047c40 = 0xffffffff;
  _DAT_ram_60047cf8 = _DAT_ram_60047cf8 | 2;
  FUN_ram_4204d8e0();
  uVar1 = 0;
  do {
    puVar4 = (uint *)(&DAT_ram_600470b8 + uVar1 * 4);
    uVar2 = uVar1 & 0xff;
    *puVar4 = *puVar4 | 5;
    *puVar4 = *puVar4 & 0xfffff6ff;
    uVar1 = uVar1 + 1;
    (*(code *)&SUB_ram_40011dd4)(uVar2,0,0,0);
  } while (uVar1 != 3);
  (*(code *)&SUB_ram_40011de4)();
  (*(code *)&SUB_ram_40011de8)();
  FUN_ram_4204dd04();
  FUN_ram_4204d80a();
  (*(code *)&SUB_ram_40011dec)();
  _DAT_ram_60047c34 = 0x19a879e0;
  _DAT_ram_60047c6c = _DAT_ram_60047c6c | 0x10000000;
  _DAT_ram_6004707c = _DAT_ram_6004707c & 0xffff0000 | 0x100201;
  uVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x148))();
  (*(code *)&SUB_ram_40011df0)(1,uVar3);
  (*(code *)&SUB_ram_40011df4)();
  auStack_21[0] = 1;
  uStack_22 = 0;
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x1a8))(3,&uStack_22);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x1a8))(0xf,auStack_21);
  FUN_ram_4204d634(0);
  FUN_ram_4204d648(uStack_22);
  FUN_ram_4204d662(auStack_21[0]);
  return;
}

