
undefined4 FUN_ram_42027380(int *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  
  if (param_2 == 0) {
    return 0xffff9f00;
  }
  (*(code *)&SUB_ram_40010488)(param_1,0,0x44);
  pcVar2 = *(code **)(*(int *)((*(byte *)(param_2 + 7) & 0x7c) + 0x3c077be0) + 0x24);
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)();
    param_1[0xf] = iVar1;
    if (iVar1 == 0) {
      return 0xffff9e80;
    }
  }
  *param_1 = param_2;
  return 0;
}

