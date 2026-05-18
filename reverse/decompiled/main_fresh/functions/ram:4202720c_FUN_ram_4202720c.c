
void FUN_ram_4202720c(int param_1,int *param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  
  if (param_3 == 0) {
    iVar1 = FUN_ram_42027142(*(undefined2 *)(param_1 + 10));
    if (iVar1 == 0) {
      *param_2 = 0xd;
      *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 2;
      *(undefined1 *)(param_1 + 0xd) = 0xff;
      return;
    }
    *param_2 = iVar1;
  }
  else {
    iVar1 = FUN_ram_420271ce(*(undefined2 *)(param_1 + 10),param_3 + 0x18);
    *param_2 = iVar1;
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_3 + 10);
      if ((*(byte *)(param_3 + 0x50) & 1) != 0) {
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 8;
      }
      *(undefined1 *)(param_1 + 0xd) = 6;
      bVar2 = *(byte *)(param_2 + 5) | 8;
      goto LAB_ram_42027258;
    }
  }
  bVar2 = *(byte *)(param_2 + 5) | 2;
LAB_ram_42027258:
  *(byte *)(param_2 + 5) = bVar2;
  return;
}

