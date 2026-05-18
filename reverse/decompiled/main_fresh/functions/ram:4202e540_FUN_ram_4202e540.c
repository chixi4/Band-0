
void FUN_ram_4202e540(char *param_1)

{
  int iVar1;
  
  thunk_FUN_ram_4202b7dc();
  iVar1 = FUN_ram_420365de(*(undefined2 *)(param_1 + 1));
  thunk_FUN_ram_4202b7f6();
  if ((*param_1 != '>') && (iVar1 != 0)) {
    *(char *)(iVar1 + 0x6c) = param_1[3];
    *(undefined2 *)(iVar1 + 0x6e) = *(undefined2 *)(param_1 + 4);
    *(undefined2 *)(iVar1 + 0x70) = *(undefined2 *)(param_1 + 6);
    if ((*(byte *)(iVar1 + 0x34) & 1) == 0) {
      FUN_ram_4202e2ee();
      return;
    }
    FUN_ram_4202e40e(*(undefined2 *)(param_1 + 1),0);
    return;
  }
  return;
}

