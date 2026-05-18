
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203bd24(void)

{
  short sVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s0;
  uint uVar2;
  int iVar3;
  int unaff_s2;
  int unaff_s3;
  
  uVar2 = *(uint *)(unaff_s0 + 0x78) >> 1 & 1;
  (**(code **)(*(int *)(unaff_s3 + -0x130) + 0x544))();
  if ((*(byte *)(unaff_s0 + 0x78) & 0x10) != 0) {
    (**(code **)(*(int *)(unaff_s2 + -0x134) + 0x9fc))(0x3018,*(undefined1 *)(unaff_s0 + 1));
                    /* WARNING: Could not recover jumptable at 0x4203be56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(unaff_s3 + -0x130) + 0x5c))();
    return;
  }
  (**(code **)(*(int *)(unaff_s3 + -0x130) + 0x3a0))(uVar2 * 0x28 + 0x84 + unaff_s0);
  (**(code **)(*(int *)(unaff_s3 + -0x130) + 0x3a0))((uVar2 ^ 1) * 0x28 + 0x84 + unaff_s0);
  (**(code **)(_DAT_ram_3fcdfec4 + 0x18))(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,unaff_s0 + 0xd4)
  ;
  sVar1 = *(short *)(unaff_s0 + 0xd8);
  *(int *)(_DAT_ram_3fcdff68 + 0x14) = *(int *)(_DAT_ram_3fcdff68 + 0x14) + 1;
  if (sVar1 == 0) {
    iVar3 = *(int *)(unaff_s2 + -0x134);
  }
  else {
    iVar3 = *(int *)(unaff_s2 + -0x134);
    if (*(uint *)(unaff_s0 + 0x20) <= *(uint *)(unaff_s0 + 0x1c)) {
      (**(code **)(iVar3 + 0x9fc))(0x3019,*(undefined1 *)(unaff_s0 + 1));
                    /* WARNING: Could not recover jumptable at 0x4203be28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)(unaff_s2 + -0x134) + 0x5f0))();
      return;
    }
  }
  if ((*(byte *)(unaff_s0 + 0xe2) == 0) || (*(byte *)(unaff_s0 + 0xe3) < *(byte *)(unaff_s0 + 0xe2))
     ) {
    *(byte *)(unaff_s0 + 0x78) = *(byte *)(unaff_s0 + 0x78) & 0xfe;
    (**(code **)(iVar3 + 0x600))();
    (**(code **)(*(int *)(unaff_s2 + -0x134) + 0x9fc))(0x3017,*(undefined1 *)(unaff_s0 + 1));
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(unaff_s3 + -0x130) + 0x60);
  }
  else {
    (**(code **)(iVar3 + 0x9fc))(0x301a,*(undefined1 *)(unaff_s0 + 1));
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(unaff_s2 + -0x134) + 0x5e8);
  }
                    /* WARNING: Could not recover jumptable at 0x4203bdf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

