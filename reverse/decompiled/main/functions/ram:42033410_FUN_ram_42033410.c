
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42033410(char *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  if (*param_1 == '\x0e') {
    if ((byte)param_1[1] < 3) {
LAB_ram_42033454:
      thunk_EXT_FUN_ram_40010ae8(param_1);
      return 0xc;
    }
    uVar1 = *(ushort *)(param_1 + 3);
    if (uVar1 != 0) {
      if (param_1[1] == 3) goto LAB_ram_42033454;
      if (uVar1 < 0x2020) {
        if (uVar1 < 0x201d) {
LAB_ram_42033478:
          iVar3 = (**(code **)(_DAT_ram_3fcb6a44 + 0x5c))(_DAT_ram_3fcb6bc4 + 4);
          iVar2 = _DAT_ram_3fcb6bc4;
          if (iVar3 != 0) {
            thunk_EXT_FUN_ram_40010ae8(param_1);
            return 0;
          }
          pcVar4 = *(code **)(_DAT_ram_3fcb6a44 + 0x58);
          *(char **)(_DAT_ram_3fcb6bc4 + 0x84) = param_1;
          (*pcVar4)(iVar2 + 4);
          return 0;
        }
      }
      else if (1 < (ushort)(uVar1 + 0xdfcd)) goto LAB_ram_42033478;
    }
  }
  else if (*param_1 == '\x0f') {
    if ((byte)param_1[1] < 4) goto LAB_ram_42033454;
    if (*(short *)(param_1 + 4) != 0) goto LAB_ram_42033478;
  }
  FUN_ram_4202baca(param_1);
  return 0;
}

