
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420971a6(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  
  uVar2 = (*(code *)&SUB_ram_40010488)(param_1 + 1,0,0x34);
  if (param_2 == 1) {
    *param_1 = &DAT_ram_60024000;
    _DAT_ram_60024014 = _DAT_ram_60024014 & 0xf801ffff;
    _DAT_ram_600240e0 = 0;
    _DAT_ram_60024010 = 0;
    _DAT_ram_600240e8 = _DAT_ram_600240e8 | 6;
    _DAT_ram_60024030 = 0x180000;
    _DAT_ram_60024034 = _DAT_ram_60024034 | 0x1000;
    _DAT_ram_60024044 = _DAT_ram_60024044 | 0x1000;
    _DAT_ram_60024000 = _DAT_ram_60024000 | 0x800000;
    do {
    } while ((int)(_DAT_ram_60024000 << 8) < 0);
    return;
  }
  *param_1 = 0;
  uRam00000014 = uRam00000014 & 0xffc1ffff;
  ebreak();
  puVar1 = (uint *)*(undefined4 *)uVar2;
  puVar1[2] = puVar1[2] & 0xfff7ffff | ((uint)((ulonglong)uVar2 >> 0x20) & 1) << 0x13;
  *puVar1 = *puVar1 | 0x800000;
  do {
  } while ((int)(*puVar1 << 8) < 0);
  return;
}

