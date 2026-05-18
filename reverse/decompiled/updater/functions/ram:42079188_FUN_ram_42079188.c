
void FUN_ram_42079188(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 != 0) {
    if ((((-1 < (char)*(byte *)(param_1 + 0xb)) && ((*(byte *)(param_1 + 0xb) & 1) == 0)) &&
        (*(char *)(param_1 + 0x19) < '\0')) &&
       ((*(char *)((*(uint *)(*(int *)(param_2 + 0x24) + 4) & 0xf) + param_1 + 0x11) == '\x01' &&
        ((int)(uint)*(byte *)(*(int *)(param_1 + 0x60) + 10) < (int)(DAT_ram_3fcb090d - 1))))) {
      uVar1 = 0;
      *(undefined1 *)(param_1 + 0xd) =
           *(undefined1 *)((DAT_ram_3fcb090d - 2 & 0xff) * 0xc + *(int *)(param_1 + 0x70));
      (*(code *)&SUB_ram_40011cd4)(param_1,4);
      *(undefined1 *)(param_1 + 0xe) = 4;
      (*(code *)&SUB_ram_40011c7c)(param_1);
      do {
        if ((*(byte *)(param_1 + 0x10) >> (uVar1 & 0x1f) & 1) != 0) {
          (*(code *)&SUB_ram_40011cc4)(param_1,2,uVar1 & 0xff);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 != 8);
    }
    return;
  }
  return;
}

