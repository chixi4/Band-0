
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203954e(int param_1,undefined4 param_2,uint param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_3 + 0x18);
  if (*pcVar2 == '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfecc + 0x9fc);
    param_3 = (uint)(byte)pcVar2[1];
    pcVar2 = (char *)0x300c;
LAB_ram_420395f2:
                    /* WARNING: Could not recover jumptable at 0x42039602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pcVar2,param_3);
    return;
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0xa28))
            (pcVar2,param_1,param_2,param_3,*pcVar2,*(code **)(_DAT_ram_3fcdfecc + 0xa28));
  pcVar2[0x198] = *(char *)(param_3 + 2);
  if (param_1 == 3) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x3002,pcVar2[1]);
                    /* WARNING: Could not recover jumptable at 0x420395e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0x51c))(param_2,param_3,pcVar2);
    return;
  }
  if (param_1 == 5) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x3000,pcVar2[1]);
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x520))(param_2,param_3,pcVar2);
    if (iVar1 == 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0xa00))(0x300b,pcVar2[1],*(undefined2 *)(pcVar2 + 10));
      if ((*(ushort *)(pcVar2 + 10) & 8) != 0) {
        (**(code **)(_DAT_ram_3fcdfecc + 0x544))(pcVar2,8);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfed0 + 0x80);
      goto LAB_ram_420395f2;
    }
  }
  return;
}

