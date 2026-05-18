
int FUN_ram_420547dc(int param_1)

{
  undefined4 unaff_retaddr;
  undefined1 *puVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  
  puVar1 = (undefined1 *)register0x00002008;
  if (param_1 != 0) goto LAB_ram_420547ea;
  while( true ) {
    register0x00002008 = (BADSPACEBASE *)(puVar1 + -0x10);
    *(undefined4 *)(puVar1 + -4) = unaff_retaddr;
    unaff_retaddr = 0x420547ea;
    param_1 = FUN_ram_4039bf1e();
LAB_ram_420547ea:
    uVar4 = *(ushort *)(param_1 + 0x2c);
    iVar2 = ((uint)uVar4 - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28);
    uVar3 = *(ushort *)(param_1 + 0x36);
    if (0xb40 < *(ushort *)(param_1 + 0x36)) {
      uVar3 = 0xb40;
    }
    if (-1 < (int)(iVar2 - (uint)uVar3)) goto LAB_ram_4205482e;
    uVar5 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28);
    if ((int)uVar5 < 0) break;
    puVar1 = (undefined1 *)register0x00002008;
    if (uVar5 < 0x10000) {
      uVar4 = (ushort)uVar5;
LAB_ram_4205482c:
      iVar2 = 0;
LAB_ram_4205482e:
      *(ushort *)(param_1 + 0x2e) = uVar4;
      return iVar2;
    }
  }
  uVar4 = 0;
  goto LAB_ram_4205482c;
}

