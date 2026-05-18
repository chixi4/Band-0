
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394416(int param_1)

{
  if (param_1 != 0) {
    _DAT_ram_60044110 = _DAT_ram_60044110 & 0xfffff0ff | 0x800;
    (*(code *)&SUB_ram_40010044)(1);
    _DAT_ram_60044110 = _DAT_ram_60044110 & 0xfffff0ff | 0xa00;
    (*(code *)&SUB_ram_40010044)(1);
    return;
  }
  _DAT_ram_60044110 = _DAT_ram_60044110 & 0xfffff0ff | 0x200;
  (*(code *)&SUB_ram_40010044)(1);
  _DAT_ram_60044110 = _DAT_ram_60044110 & 0xfffff0ff;
  (*(code *)&SUB_ram_40010044)(1);
  if ((_DAT_ram_6002600c & 2) == 0) {
    (**(code **)(_DAT_ram_3fcc4c78 + 0x78))();
    (**(code **)(_DAT_ram_3fcc4c78 + 0x70))(4,2,3);
                    /* WARNING: Could not recover jumptable at 0x403944ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcc4c78 + 0x7c))();
    return;
  }
  return;
}

