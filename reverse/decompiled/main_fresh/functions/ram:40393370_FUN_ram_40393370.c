
void FUN_ram_40393370(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  if (*(char *)(*(int *)(param_1 + 0x9c) + 0x40) == '\0') {
    FUN_ram_4039aec8(param_1 + 0x20);
  }
  pcVar2 = *(code **)(*(int *)(*(int *)(param_1 + 0x98) * 4 + param_1 + 4) + 0x38);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(uVar1);
  }
  *(undefined4 *)(param_1 + 0x98) = 6;
  return;
}

