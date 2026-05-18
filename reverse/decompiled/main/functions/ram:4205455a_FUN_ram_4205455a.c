
void FUN_ram_4205455a(int param_1)

{
  ushort uVar1;
  undefined4 unaff_retaddr;
  undefined1 *puVar2;
  int iVar3;
  
  puVar2 = (undefined1 *)register0x00002008;
  if (param_1 != 0) goto LAB_ram_42054568;
  do {
    register0x00002008 = (BADSPACEBASE *)(puVar2 + -0x10);
    *(undefined4 *)(puVar2 + -4) = unaff_retaddr;
    unaff_retaddr = 0x42054568;
    param_1 = FUN_ram_4039bf1e();
LAB_ram_42054568:
    uVar1 = *(ushort *)(param_1 + 0x1e);
    if ((uVar1 & 0x200) == 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x80);
    if (iVar3 == 0) {
      return;
    }
    puVar2 = (undefined1 *)register0x00002008;
  } while (*(char *)(iVar3 + 0x21) == '\0');
  *(char *)(iVar3 + 0x21) = *(char *)(iVar3 + 0x21) + -1;
  *(ushort *)(param_1 + 0x1e) = uVar1 & 0xfdff;
  return;
}

