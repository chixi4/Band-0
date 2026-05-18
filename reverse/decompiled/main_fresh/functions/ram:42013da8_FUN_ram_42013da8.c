
void FUN_ram_42013da8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  for (iVar1 = 0; param_1 != iVar1; iVar1 = iVar1 + 1) {
    iVar2 = FUN_ram_42013d62(iVar1);
    if ((((iVar2 != 0) && (iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x2c), iVar2 != 0)) &&
        (pcVar3 = *(code **)(iVar2 + 0x14), pcVar3 != (code *)0x0)) &&
       (*(char *)(iVar1 * 0x1c + param_2) != '\0')) {
      (*pcVar3)(*(undefined4 *)(iVar1 * 4 + param_3));
    }
  }
  return;
}

