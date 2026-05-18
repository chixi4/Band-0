
void thunk_FUN_ram_42073a7a(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  while (iVar1 = thunk_FUN_ram_4039047a(param_1), iVar1 == 0) {
    pcVar2 = (code *)FUN_ram_420734fa();
    if (pcVar2 == (code *)0x0) {
      puVar3 = (undefined4 *)FUN_ram_42073b0e(4);
      *puVar3 = 0x3c07a934;
      pcVar2 = (code *)FUN_ram_42073b1a(puVar3,0x3c07a920,0x42063ace);
    }
    (*pcVar2)();
  }
  return;
}

