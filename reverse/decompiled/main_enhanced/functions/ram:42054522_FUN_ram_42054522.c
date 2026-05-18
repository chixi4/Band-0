
void FUN_ram_42054522(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  
  if (param_1 == 0) {
LAB_ram_42054524:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  uVar2 = *(ushort *)(param_1 + 0x1e);
  if (((uVar2 & 0x200) == 0) && (iVar3 = *(int *)(param_1 + 0x80), iVar3 != 0)) {
    cVar1 = *(char *)(iVar3 + 0x21);
    *(char *)(iVar3 + 0x21) = cVar1 + '\x01';
    if (cVar1 == -1) goto LAB_ram_42054524;
    *(ushort *)(param_1 + 0x1e) = uVar2 | 0x200;
  }
  return;
}

