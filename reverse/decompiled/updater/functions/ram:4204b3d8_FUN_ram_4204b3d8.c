
void FUN_ram_4204b3d8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x24);
    uVar1 = *(uint *)(iVar3 + 4) >> 4 & 0xf;
    if (uVar1 < 5) {
      iVar2 = uVar1 + 0x10;
      if (*(byte *)(iVar3 + 6) < *(byte *)(gp + 0x5c5)) {
        if (*(byte *)(iVar3 + 7) < *(byte *)(gp + 0x5c4)) {
          iVar2 = iVar2 * 8;
          iVar3 = FUN_ram_4039aab2();
          if (iVar3 == 0) {
            *(char *)(iVar2 + 0x3fcb55e3) = *(char *)(iVar2 + 0x3fcb55e3) + '\x01';
          }
          else {
            *(char *)(iVar2 + 0x3fcb55e2) = *(char *)(iVar2 + 0x3fcb55e2) + '\x01';
          }
        }
        else {
          *(char *)(iVar2 * 8 + 0x3fcb55e0) = *(char *)(iVar2 * 8 + 0x3fcb55e0) + '\x01';
        }
      }
      else {
        *(char *)(iVar2 * 8 + 0x3fcb55e1) = *(char *)(iVar2 * 8 + 0x3fcb55e1) + '\x01';
      }
    }
    return;
  }
  return;
}

