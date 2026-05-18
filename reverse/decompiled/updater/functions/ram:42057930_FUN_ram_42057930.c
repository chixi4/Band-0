
void FUN_ram_42057930(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(&DAT_ram_3fcb5d24 + param_1 * 0x18);
  if (*(int **)(&DAT_ram_3fcb5d24 + param_1 * 0x18) != (int *)0x0) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_ram_42051d02(piVar1[1]);
      FUN_ram_4205151c(9,piVar1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
    *(undefined4 *)(&DAT_ram_3fcb5d24 + param_1 * 0x18) = 0;
  }
  (&DAT_ram_3fcb5d38)[param_1 * 0x18] = 0;
  return;
}

