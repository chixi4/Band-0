
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4201a934(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  byte bVar3;
  
  uVar1 = 0;
  bVar3 = 0;
  for (piVar2 = *(int **)(_DAT_ram_3fcb66dc + 4); piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
    if (piVar2 == (int *)param_1) {
      uVar1 = 1;
    }
    else {
      bVar3 = bVar3 | *(byte *)(piVar2 + 3) ^ 1;
    }
  }
  *param_2 = bVar3 ^ 1;
  return uVar1;
}

