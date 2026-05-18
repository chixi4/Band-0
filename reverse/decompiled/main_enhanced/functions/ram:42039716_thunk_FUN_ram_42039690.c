
void thunk_FUN_ram_42039690(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  code *pcVar2;
  int in_a5;
  int unaff_s2;
  
  pcVar2 = *(code **)(in_a5 + 0x120);
  *(undefined4 *)(unaff_s1 + 0x4c) = 0;
  (*pcVar2)();
  iVar1 = (**(code **)(*(int *)(unaff_s0 + -0x134) + 0x114))();
  if (*(char *)(iVar1 + 99) != '\0') {
    (**(code **)(*(int *)(unaff_s0 + -0x134) + 0x6f4))();
  }
  iVar1 = (**(code **)(*(int *)(unaff_s0 + -0x134) + 0x72c))();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x420396ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(unaff_s0 + -0x134) + 0x70c))
              (0,*(undefined1 *)(unaff_s1 + 1),*(undefined2 *)(unaff_s2 + 8),
               *(undefined1 *)(unaff_s1 + 0xe3));
    return;
  }
  return;
}

