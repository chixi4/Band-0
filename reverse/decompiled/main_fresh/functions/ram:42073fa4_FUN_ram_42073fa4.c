
undefined1 * FUN_ram_42073fa4(undefined1 *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  bVar1 = *param_2;
  if (8 < bVar1) {
    *param_1 = 0x32;
    iVar2 = bVar1 - 8;
    if (*(char *)(*(int *)(gp + -0xb4) + 0x47c) == '\x01') {
      param_1[1] = bVar1 - 7;
      param_1[2] = 0xfb;
      puVar4 = param_1 + 3;
    }
    else {
      puVar4 = param_1 + 2;
      param_1[1] = (char)iVar2;
    }
    iVar3 = FUN_ram_4039c11e(puVar4,param_2 + 9,iVar2);
    return (undefined1 *)(iVar3 + iVar2);
  }
  return param_1;
}

