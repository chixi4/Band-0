
void FUN_ram_42054522(int param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 unaff_retaddr;
  undefined1 *puVar3;
  int iVar4;
  
  puVar3 = (undefined1 *)register0x00002008;
  if (param_1 != 0) goto LAB_ram_42054530;
  do {
    register0x00002008 = (BADSPACEBASE *)(puVar3 + -0x10);
    *(undefined4 *)(puVar3 + -4) = unaff_retaddr;
    unaff_retaddr = 0x42054530;
    param_1 = FUN_ram_4039bf1e();
LAB_ram_42054530:
    uVar2 = *(ushort *)(param_1 + 0x1e);
    if ((uVar2 & 0x200) != 0) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x80);
    if (iVar4 == 0) {
      return;
    }
    cVar1 = *(char *)(iVar4 + 0x21);
    *(char *)(iVar4 + 0x21) = cVar1 + '\x01';
    puVar3 = (undefined1 *)register0x00002008;
  } while (cVar1 == -1);
  *(ushort *)(param_1 + 0x1e) = uVar2 | 0x200;
  return;
}

