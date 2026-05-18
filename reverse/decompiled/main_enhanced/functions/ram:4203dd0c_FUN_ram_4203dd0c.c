
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203dd0c(int param_1,undefined4 param_2,int param_3)

{
  uint unaff_s1;
  uint *puVar1;
  uint unaff_s2;
  undefined8 uVar2;
  
  if (_DAT_ram_3fcdfe60 < 0xc) {
    if ((unaff_s2 & 1) != 0) {
      if (param_3 != 0) {
LAB_ram_4203dd7e:
        puVar1 = *(uint **)(_DAT_ram_3fcdff6c + 0x1c);
        *puVar1 = *puVar1 | unaff_s1;
        puVar1[1] = puVar1[1] | unaff_s2;
        return 0;
      }
LAB_ram_4203dd36:
      puVar1 = *(uint **)(_DAT_ram_3fcdff6c + 0x1c);
      *puVar1 = ~unaff_s1 & *puVar1;
      puVar1[1] = puVar1[1] & ~unaff_s2;
      return 0;
    }
  }
  else {
    uVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0xd8))();
    if ((unaff_s2 & 0x41) != 0) {
      if (*(char *)(param_1 + 1) == '\0') goto LAB_ram_4203dd36;
      if (((uint)uVar2 & unaff_s1) != 0 || (unaff_s2 & (uint)((ulonglong)uVar2 >> 0x20)) != 0)
      goto LAB_ram_4203dd7e;
    }
  }
  return 0x11;
}

