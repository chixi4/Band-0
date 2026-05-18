
undefined4 FUN_ram_420a5a52(int *param_1,int param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(char *)(param_1 + 2) = (char)param_2;
  *(undefined1 *)((int)param_1 + 9) = param_3;
  if (param_2 == 0) {
    *(undefined1 *)((int)param_1 + 10) = 2;
  }
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  *(undefined1 *)((int)param_1 + 0xe) = 1;
  param_1[1] = 0x303;
  *param_1 = 0x303;
  if (param_4 == 2) {
    param_1[4] = (int)&DAT_ram_3c0fb660;
    param_1[0x10] = (int)&DAT_ram_3c0fb730;
    puVar3 = &DAT_ram_3c0fb64c;
    puVar2 = &DAT_ram_3c0fb648;
  }
  else {
    iVar1 = FUN_ram_420a3e0a();
    param_1[0x10] = (int)&DAT_ram_3c0fb740;
    param_1[4] = iVar1;
    if ((param_1[1] == 0x303) && (*param_1 == 0x303)) {
      puVar3 = &UNK_ram_3c0fb650;
    }
    else {
      puVar3 = &DAT_ram_3c0fb658;
    }
    puVar2 = &DAT_ram_3c0fb66c;
  }
  param_1[0x14] = (int)puVar3;
  param_1[0x15] = (int)puVar2;
  return 0;
}

