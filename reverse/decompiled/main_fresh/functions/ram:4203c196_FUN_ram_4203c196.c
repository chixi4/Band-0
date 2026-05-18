
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203c196(int param_1,int param_2,byte *param_3)

{
  (*(code *)&SUB_ram_40011548)();
  if ((*(ushort *)(param_2 + 6) & 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x4203c202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0xa00))
              (0xf,(uint)*(byte *)(param_1 + 0x45) << 0x10 | (uint)*param_3 << 8 |
                   (*param_3 & 3) << 0x18 | 4,
               (uint)*(ushort *)(param_1 + 8) |
               (int)*(char *)(param_1 + 0xd) << 0x18 | (uint)*(byte *)(param_1 + 0xb) << 0x10);
    return;
  }
  return;
}

