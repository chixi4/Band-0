
void FUN_ram_420ac0de(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while (iVar1 = thunk_FUN_ram_403904a6(param_1), iVar1 == 0) {
    pcVar2 = (code *)FUN_ram_420abb5e();
    if (pcVar2 == (code *)0x0) {
      puVar3 = (undefined4 *)FUN_ram_420ac172(4);
      *puVar3 = &DAT_ram_3c0fb88c;
      pcVar2 = (code *)FUN_ram_420ac17e(puVar3,&DAT_ram_3c0fb878,0x4209c132);
    }
    (*pcVar2)();
  }
  return;
}

