
void FUN_ram_4205455a(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  if (param_1 == 0) {
LAB_ram_4205455c:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  uVar1 = *(ushort *)(param_1 + 0x1e);
  if (((uVar1 & 0x200) != 0) && (iVar2 = *(int *)(param_1 + 0x80), iVar2 != 0)) {
    if (*(char *)(iVar2 + 0x21) == '\0') goto LAB_ram_4205455c;
    *(char *)(iVar2 + 0x21) = *(char *)(iVar2 + 0x21) + -1;
    *(ushort *)(param_1 + 0x1e) = uVar1 & 0xfdff;
  }
  return;
}

