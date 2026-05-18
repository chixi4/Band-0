
void FUN_ram_42093df0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x24);
    uVar1 = *(uint *)(iVar3 + 4) >> 4 & 0xf;
    if (uVar1 < 5) {
      iVar2 = uVar1 + 0x10;
      if (*(byte *)(iVar3 + 6) < *(byte *)(gp + 0x6f9)) {
        if (*(byte *)(iVar3 + 7) < *(byte *)(gp + 0x6f8)) {
          iVar2 = iVar2 * 8;
          iVar3 = FUN_ram_4039ce7e();
          if (iVar3 == 0) {
            *(char *)(iVar2 + 0x3fcc4673) = *(char *)(iVar2 + 0x3fcc4673) + '\x01';
          }
          else {
            *(char *)(iVar2 + 0x3fcc4672) = *(char *)(iVar2 + 0x3fcc4672) + '\x01';
          }
        }
        else {
          *(char *)(iVar2 * 8 + 0x3fcc4670) = *(char *)(iVar2 * 8 + 0x3fcc4670) + '\x01';
        }
      }
      else {
        *(char *)(iVar2 * 8 + 0x3fcc4671) = *(char *)(iVar2 * 8 + 0x3fcc4671) + '\x01';
      }
    }
    return;
  }
  return;
}

