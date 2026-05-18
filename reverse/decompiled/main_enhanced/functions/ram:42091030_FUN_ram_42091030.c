
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42091030(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int in_a5;
  uint uVar2;
  int unaff_s2;
  
  iVar1 = (**(code **)(in_a5 + 400))();
  if (iVar1 != 0) {
    uVar2 = *(uint *)(unaff_s0 + 0x194);
    if ((uVar2 & 0xffffffbf) == 0) {
      *(undefined1 *)(unaff_s0 + 0x1a) = 0;
      if ((uVar2 == 0) && (iVar1 = FUN_ram_420936ce(1), iVar1 != 0)) {
        (**(code **)(*(int *)(unaff_s2 + -0x228) + 0xe4))(unaff_s0 + 0x200);
        (**(code **)(*(int *)(unaff_s2 + -0x228) + 0xf0))
                  (0x3fcc4600,*(int *)(unaff_s0 + 0x1b0) + 1000,0);
      }
      if (*(char *)(unaff_s0 + 0x121) == '\x02') {
        (*(code *)&SUB_ram_40011d50)();
        return;
      }
    }
    else if (uVar2 == 4) {
      *(undefined1 *)(unaff_s1 + 0x1a) = 0;
      *(undefined1 *)(unaff_s1 + 0x21d) = *(undefined1 *)(unaff_s1 + 0x13);
      *(undefined1 *)(unaff_s1 + 0x13) = 0;
      *(undefined1 *)(unaff_s1 + 0x14) = 0;
      _DAT_ram_60047ca0 = _DAT_ram_60047ca0 | 0xe0000;
      if ((*(char *)(unaff_s1 + 1) == '\0') || (*(char *)(unaff_s1 + 0x15) != '\0')) {
        if ((*(char *)(gp + 0x200) != '\0') ||
           ((*(int *)(unaff_s0 + 0x4c) != 0 || (iVar1 = FUN_ram_42092cdc(1), iVar1 != 0)))) {
          *(undefined1 *)(unaff_s0 + 0x1b) = 1;
        }
        FUN_ram_42090c4e();
        return;
      }
      if (*(char *)(unaff_s1 + 1) == '\x01') {
        (*(code *)&SUB_ram_40011b88)();
        return;
      }
    }
  }
  return;
}

