
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203d0c6(void)

{
  int unaff_s0;
  int unaff_s1;
  code *in_a5;
  int unaff_s2;
  
  (*in_a5)(unaff_s0 + 0x28);
  (**(code **)(*(int *)(unaff_s1 + -0x13c) + 0x24))
            (unaff_s0 + 0x44,*(undefined4 *)(*(int *)(unaff_s2 + -0x130) + 0x154));
  (**(code **)(*(int *)(unaff_s1 + -0x13c) + 0x60))
            (unaff_s0 + 0x48,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
             *(undefined4 *)(*(int *)(unaff_s2 + -0x130) + 0x170));
                    /* WARNING: Could not recover jumptable at 0x4203d12e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(unaff_s1 + -0x13c) + 0x60))
            (unaff_s0 + 0x4c,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
             *(undefined4 *)(*(int *)(unaff_s2 + -0x130) + 0x174));
  return;
}

