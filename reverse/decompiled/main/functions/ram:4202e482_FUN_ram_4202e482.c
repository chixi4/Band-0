
void FUN_ram_4202e482(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  thunk_FUN_ram_4202b7dc();
  iVar2 = FUN_ram_420365de(*(undefined2 *)(param_1 + 2));
  thunk_FUN_ram_4202b7f6();
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 != '>') {
    if (iVar2 == 0) {
      if (cVar1 != '\0') {
        FUN_ram_4202e40e(*(undefined2 *)(param_1 + 2));
        return;
      }
    }
    else {
      if ((*(byte *)(iVar2 + 0x34) & 1) != 0) {
        if (cVar1 == '\0') {
          uVar3 = (*(code *)&SUB_ram_40011940)(param_1 + 4);
          *(uint *)(iVar2 + 0x30) = uVar3 >> 1 & 1;
        }
        FUN_ram_4202e2d0(*(undefined2 *)(param_1 + 2));
        return;
      }
      if (cVar1 == '\0') {
        uVar3 = (*(code *)&SUB_ram_40011940)(param_1 + 4);
        *(uint *)(iVar2 + 0x30) = uVar3 >> 1 & 1;
      }
      FUN_ram_4202e40e(*(undefined2 *)(param_1 + 2),*(undefined1 *)(param_1 + 1));
      *(byte *)(iVar2 + 5) = *(byte *)(iVar2 + 5) | 1;
    }
  }
  return;
}

